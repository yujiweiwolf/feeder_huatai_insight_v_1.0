#include <mutex>
#include <thread>
#include <filesystem>
#include <boost/filesystem.hpp>
#include <x/x.h>
#include <coral/coral.h>
#include "config.h"
#include "yaml-cpp/yaml.h"

namespace co {
    Config* Config::instance_ = 0;

    Config* Config::Instance() {
        static std::once_flag flag;
        std::call_once(flag, [&]() {
            if (instance_ == 0) {
                instance_ = new Config();
                instance_->Init();
            }
        });
        return instance_;
    }

    void Config::Init() {
        try {
            auto getStr = [&](const YAML::Node& node, const std::string& name) {
                try {
                    return node[name] && !node[name].IsNull() ? node[name].as<std::string>() : "";
                } catch (std::exception& e) {
                    LOG_ERROR << "load configuration failed: name = " << name << ", error = " << e.what();
                    throw std::runtime_error(e.what());
                }
            };
            auto getStrings = [&](std::vector<std::string>* ret, const YAML::Node& node, const std::string& name, bool drop_empty = false) {
                try {
                    if (node[name] && !node[name].IsNull()) {
                        for (auto item : node[name]) {
                            std::string s = x::Trim(item.as<std::string>());
                            if (!drop_empty || !s.empty()) {
                                ret->emplace_back(s);
                            }
                        }
                    }
                } catch (std::exception& e) {
                    LOG_ERROR << "load configuration failed: name = " << name << ", error = " << e.what();
                    throw std::runtime_error(e.what());
                }
            };
            auto getInt = [&](const YAML::Node& node, const std::string& name, const int64_t& default_value = 0) {
                try {
                    return node[name] && !node[name].IsNull() ? node[name].as<int64_t>() : default_value;
                } catch (std::exception& e) {
                    LOG_ERROR << "load configuration failed: name = " << name << ", error = " << e.what();
                    throw std::runtime_error(e.what());
                }
            };
            auto getBool = [&](const YAML::Node& node, const std::string& name) {
                try {
                    return node[name] && !node[name].IsNull() ? node[name].as<bool>() : false;
                } catch (std::exception& e) {
                    LOG_ERROR << "load configuration failed: name = " << name << ", error = " << e.what();
                    throw std::runtime_error(e.what());
                }
            };

            auto filename = x::FindFile("feeder.yaml");
            YAML::Node root = YAML::LoadFile(filename);
            opt_ = QOptions::Load(filename);
            auto feeder = root["insight"];
            server_host_ = getStr(feeder, "server_host");
            server_port_ = getInt(feeder, "server_port");
            username_ = getStr(feeder, "username");
            password_ = getStr(feeder, "password");
            password_ = DecodePassword(password_);

            boost::filesystem::path _p(filename);
            cert_dir_ = _p.parent_path().string();
            apilog_flag_ = getInt(feeder, "apilog_flag");
            compress_flag_ = getInt(feeder, "compress_flag");
            static_dir_ = getStr(feeder, "static_dir");
            stringstream ss;
            ss << "+-------------------- configuration begin --------------------+" << endl;
            ss << opt_->ToString() << endl;
            ss << endl;
            ss << "insight:" << endl
               << "  server_host: " << server_host_ << endl
               << "  server_port: " << server_port_ << endl
               << "  username: " << username_ << endl
               << "  password: " << string(password_.size(), '*') << endl
               << "  apilog_flag: " << apilog_flag_ << endl
               << "  compress_flag: " << compress_flag_ << endl
               << "  static_dir: " << static_dir_ << endl
               << "+-------------------- configuration end   --------------------+";
            LOG_INFO << endl << ss.str();
        } catch (std::exception& e) {
            LOG_ERROR << "load configuration failed: " << e.what();
            throw std::runtime_error(e.what());
        }
    }
}
