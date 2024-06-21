#include "insight_server.h"
#include <filesystem>

namespace co {

    void InsightServer::Run() {
        QOptionsPtr opt = Config::Instance()->opt();
        QServer::Instance()->Init(opt);
        QServer::Instance()->Start();
        // ------------------------------------------------------------
        int apilog_flag = Config::Instance()->apilog_flag();
        int compress_flag = Config::Instance()->compress_flag();
        close_cout_log();  // api日志输出到终端
        close_trace();
        if (apilog_flag) {
            open_file_log();  // api日志输出到文件
        } else {
            close_file_log();
        }

        // SDK默认进行解压缩，互联网用户无需配置
        if (compress_flag == 0) {
            close_compress();
        }

        // open_response_callback();
        close_heartbeat_trace();//关闭heartbeat_trace，不输出心跳日志消息
        close_response_callback();
        init_env();
        string cert_dir = Config::Instance()->cert_dir();
        client_ = ClientFactory::Instance()->CreateClient(true, cert_dir.c_str());
        if (!client_) {
            LOG_FATAL << "create insight client failed";
            ClientFactory::Uninstance();
            client_ = NULL;
            return;
        }
        handler_ = new InsightHandler();
        client_->RegistHandle(handler_);
        Login();
        QueryContracts();
        SubQuotation();
		LOG_INFO << "server startup successfully";
        // ------------------------------------------------------------
        QServer::Instance()->Wait();
		Stop();
		QServer::Instance()->Stop();
    };

    void InsightServer::Stop() {
        ClientFactory::Uninstance();
        client_ = nullptr;
        delete handler_;
        handler_ = nullptr;
    }

    void InsightServer::Login() {
        string server_host = Config::Instance()->server_host();
        int server_port = Config::Instance()->server_port();
        string username = Config::Instance()->username();
        string password = Config::Instance()->password();
        LOG_INFO << "login ...";
        while (true) {
            int rc = client_->LoginByServiceDiscovery(server_host, server_port, username, password, false);
            if (rc == 0) {
                break;
            }
            LOG_ERROR << "login failed: " << get_error_code_value(rc) << ", retry in 3s ...";
            x::Sleep(3000);
        }
    }

    void InsightServer::QueryContracts() {
        std::string static_dir = Config::Instance()->static_dir();
        if (!std::filesystem::exists(static_dir)) {
            std::filesystem::create_directories(static_dir);
            __info << "create static dir";
        }
        string csv_file = static_dir + "/huatai_static_data_" + to_string(x::RawDate()) + ".csv";
        std::ofstream fout_;
        if (!fout_.is_open()) {
            fout_.open(csv_file, std::ios::out | std::ios::trunc);
            __info << "create csv file: " << csv_file;
            string csv_head = "HTSCSecurityID,Symbol,SecurityIDSource,SecurityType,ListDate,TickSize,ExchangeSymbol,OptionUnderlyingSecurityID,OptionUnderlyingSymbol,OptionCallOrPut,OptionTickSize,OptionExercisePrice,OptionStartDate,OptionEndDate,OptionExerciseDate,OptionDeliveryDate,OptionContractMultiplierUnit,VolumeMultiple,CreateDate,ExpireDate,StartDelivDate,EndDelivDate\n";
            fout_.write(csv_head.data(), csv_head.size());
            fout_.flush();
        }
        // 查询静态信息
        for (int i = 0; i < 5; i++) {
            std::unique_ptr<MDQueryRequest> request(new MDQueryRequest());
            request->set_querytype(QUERY_TYPE_LATEST_BASE_INFORMATION);
            SecuritySourceType* security_source_type = request->add_securitysourcetype();
            // XSHG 是上交所, XSHE 是深交所, CNI 是国证指数有限公司， CSI 是中证指数有限公司
            // CCFX 中国金融期货交易所, XSGE 上海期货交易所
            // XDCE 大连商品交易所, XZCE 郑州商品交易所
            LOG_INFO << "query index: " << i;
            if (i == 0) {
                security_source_type->set_securityidsource(XSHG);
            } else if (i == 1) {
                security_source_type->set_securityidsource(XSHE);
            } else if (i == 2) {
                security_source_type->set_securityidsource(CNI);
            } else if (i == 3) {
                security_source_type->set_securityidsource(XBSE);  // 无CSI
            } else if (i == 4) {
                security_source_type->set_securityidsource(CCFX);
            }

            std::vector<MDQueryResponse*>* responses = nullptr;
            LOG_INFO << "query contracts ...";
            handler_->ClearQueryStatus();
            int rc = client_->RequestMDQuery(&(*request), responses);
            if (rc != 0) {
                LOG_ERROR << "query contracts failed: " << get_error_code_value(rc)
                    << ", type: " << i << " , retry in 3s ...";
                x::Sleep(2000);
                continue;
            }

            for (unsigned int i = 0; i < responses->size(); ++i) {
                if (!responses->at(i)->issuccess()) {
                    continue;
                }
                if (!responses->at(i)->has_marketdatastream()) {
                    continue;
                }
                google::protobuf::RepeatedPtrField<MarketData>::const_iterator it
                    = responses->at(i)->marketdatastream().marketdatalist().marketdatas().begin();
                google::protobuf::RepeatedPtrField<MarketData>::const_iterator end
                    = responses->at(i)->marketdatastream().marketdatalist().marketdatas().end();
                while (it != end) {
                    if (it->marketdatatype() == MD_CONSTANT && it->has_mdconstant()) {
                        const MDBasicInfo& p = it->mdconstant();
                        // 产品大分类 7 期权, 8 期货
//                        LOG_INFO << "HTSCSecurityID: " << p.htscsecurityid()
//                                 << ", Symbol: " << p.symbol()
//                                 << ", SecurityIDSource: " << p.securityidsource()
//                                 << ", SecurityType: " << p.securitytype()
//                                 << ", ListDate: " << p.listdate()
//                                 << ", TickSize: " << p.ticksize()
//                                 << ", ExchangeSymbol: " << p.exchangesymbol()
//                                 << ", OptionUnderlyingSecurityID: " << p.optionunderlyingsecurityid()
//                                 << ", OptionUnderlyingSymbol: " << p.optionunderlyingsymbol()
//                                 << ", OptionCallOrPut: " << p.optioncallorput()
//                                 << ", OptionTickSize: " << p.optionticksize()
//                                 << ", OptionExercisePrice: " << p.optionexerciseprice()
//                                 << ", OptionStartDate: " << p.optionstartdate()
//                                 << ", OptionEndDate: " << p.optionenddate()
//                                 << ", OptionExerciseDate: " << p.optionexercisedate()
//                                 << ", OptionDeliveryDate: " << p.optiondeliverydate()
//                                 << ", OptionContractMultiplierUnit: " << p.optioncontractmultiplierunit()
//                                 << ", VolumeMultiple: " << p.volumemultiple()
//                                 << ", CreateDate: " << p.createdate()
//                                 << ", ExpireDate: " << p.expiredate()
//                                 << ", StartDelivDate: " << p.startdelivdate()
//                                 << ", EndDelivDate: " << p.enddelivdate();
                        if (p.securitytype() == ESecurityType::OptionType || p.securitytype() == ESecurityType::FuturesType) {
                            if (p.ticksize() <= 0 && p.optionticksize() <= 0) {
                                it++;
                                continue;
                            }
                        }
                        {
                            std::stringstream ss;
                            ss << p.htscsecurityid()
                                     << "," << p.symbol()
                                     << "," << p.securityidsource()
                                     << "," << p.securitytype()
                                     << "," << p.listdate()
                                     << "," << p.ticksize()
                                     << ","  << p.exchangesymbol()
                                     << ","  << p.optionunderlyingsecurityid()
                                     << ","  << p.optionunderlyingsymbol()
                                     << "," << p.optioncallorput()
                                     << ","  << p.optionticksize()
                                     << "," << p.optionexerciseprice()
                                     << "," << p.optionstartdate()
                                     << ","  << p.optionenddate()
                                     << "," << p.optionexercisedate()
                                     << "," << p.optiondeliverydate()
                                     << ","  << p.optioncontractmultiplierunit()
                                     << ","  << p.volumemultiple()
                                     << ","  << p.createdate()
                                     << "," << p.expiredate()
                                     << ","  << p.startdelivdate()
                                     << "," << p.enddelivdate()
                                     << "\n";
                            std::string line = ss.str();
                            fout_.write(line.data(), line.size());
                            fout_.flush();
                        }
                        string code = p.htscsecurityid();
                        string std_code;
                        int64_t market = Market2Std(p.securityidsource());
                        if (market == kMarketSZ || market == kMarketSH || market == kMarketCSI || market == kMarketCNI || market == kMarketBJ) {
                            std_code = p.htscsecurityid();
                        } else {
                            string securityid = p.htscsecurityid();
                            auto pos = securityid.find('.');
                            if (pos == securityid.npos) {
                                continue;
                            }
                            std_code = securityid.substr(0, pos) + Market2Suffix(market);
                        }
                        if (std_code.length() > 0) {
                            QContextPtr ctx = QServer::Instance()->GetContext(code);
                            if (!ctx) {
                                string name = p.symbol();
                                ctx = QServer::Instance()->NewContext(code, std_code);
                                co::fbs::QTickT &tick = ctx->tick();
                                tick.name = name;
                                tick.market = market;
                                if (p.securitytype() == ESecurityType::OptionType ||
                                    p.securitytype() == ESecurityType::FuturesType) {
                                    if (p.securitytype() == ESecurityType::FuturesType) {
                                        tick.dtype = kDTypeFuture;
                                        tick.price_step = p.ticksize();
                                        tick.create_date = atoll(p.createdate().c_str());
                                        tick.expire_date = atoll(p.expiredate().c_str());
                                        tick.start_settle_date = atoll(p.startdelivdate().c_str());
                                        tick.end_settle_date = atoll(p.enddelivdate().c_str());
                                        tick.multiple = p.volumemultiple() >= 0 ? p.volumemultiple() : 0;
                                    } else {
                                        tick.dtype = kDTypeOption;
                                        tick.price_step = p.optionticksize();
                                        // 没有createdate
                                        tick.create_date = atoll(p.optionstartdate().c_str());
                                        tick.expire_date = atoll(p.optionenddate().c_str());
                                        tick.start_settle_date = atoll(p.optiondeliverydate().c_str());
                                        tick.end_settle_date = atoll(p.optiondeliverydate().c_str());
                                        tick.multiple =
                                                p.optioncontractmultiplierunit() >= 0 ? p.optioncontractmultiplierunit()
                                                                                      : 0;
                                        tick.exercise_date = atoll(p.optionexercisedate().c_str());
                                        tick.exercise_price = p.optionexerciseprice();
                                        string suffix = Market2Suffix(market);
                                        tick.underlying_code = x::Trim(p.optionunderlyingsecurityid()) + suffix;
                                        tick.cp_flag = x::Trim(p.optioncallorput()) == "C" ? kCpFlagCall : kCpFlagPut;
                                    }
                                    tick.list_date = atoll(p.listdate().c_str());
                                }
                            }
                        }
                    }
                    it++;
                }
            }
            client_->ReleaseQueryResult(responses);
            LOG_INFO << "query contracts ok: contracts = " << QServer::Instance()->contexts().size();
            x::Sleep(2000);
        }
        fout_.close();
    }

    void InsightServer::SubQuotation() {
        // 订阅行情
        LOG_INFO << "sub quotation ...";
        ESubscribeActionType action_type = COVERAGE;
        std::unique_ptr<SubscribeBySourceType> subscribe_all(new SubscribeBySourceType());

        // std::unique_ptr<SubscribeAll> subscribe_all(new SubscribeAll());
        QOptionsPtr opt = Config::Instance()->opt();

        //* 根据证券数据来源订阅行情数据, 由三部分确定行情数据
        //* 行情源(SecurityIdSource) :XSHG(沪市) | XSHE(深市) | ...，不填默认全选
        //* 证券类型(SecurityType) : BondType(债) | StockType(股) | FundType(基) | IndexType(指) | OptionType(期权) | ...
        //* 数据类型(MarketDataTypes) : MD_TICK(快照) | MD_TRANSACTION(逐笔成交) | MD_ORDER(逐笔委托) | ...
        if (opt->enable_spot()) {
            SetSubInfo(*subscribe_all, MD_TICK, StockType);
            SetSubInfo(*subscribe_all, MD_TICK, FundType);
            SetSubInfo(*subscribe_all, MD_TICK, BondType);
            SetSubInfo(*subscribe_all, MD_TICK, IndexType);
        }
        // 只保留中金所的期权、期货
        if (opt->enable_future()) {
            SubscribeBySourceTypeDetail* detail = subscribe_all->add_subscribebysourcetypedetail();
            SecuritySourceType* sub_info = new SecuritySourceType();
            sub_info->set_securityidsource(CCFX);
            sub_info->set_securitytype(FuturesType);
            detail->set_allocated_securitysourcetypes(sub_info);
            detail->add_marketdatatypes(MD_TICK);
        }
        // 只保留上交所、深交所、中金所的期权
        if (opt->enable_option()) {
            {
                SubscribeBySourceTypeDetail* detail = subscribe_all->add_subscribebysourcetypedetail();
                SecuritySourceType* sub_info = new SecuritySourceType();
                sub_info->set_securityidsource(XSHG);
                sub_info->set_securitytype(OptionType);
                detail->set_allocated_securitysourcetypes(sub_info);
                detail->add_marketdatatypes(MD_TICK);
            }
            {
                SubscribeBySourceTypeDetail *detail = subscribe_all->add_subscribebysourcetypedetail();
                SecuritySourceType *sub_info = new SecuritySourceType();
                sub_info->set_securityidsource(XSHE);
                sub_info->set_securitytype(OptionType);
                detail->set_allocated_securitysourcetypes(sub_info);
                detail->add_marketdatatypes(MD_TICK);
            }
            {
                SubscribeBySourceTypeDetail* detail = subscribe_all->add_subscribebysourcetypedetail();
                SecuritySourceType* sub_info = new SecuritySourceType();
                sub_info->set_securityidsource(CCFX);
                sub_info->set_securitytype(OptionType);
                detail->set_allocated_securitysourcetypes(sub_info);
                detail->add_marketdatatypes(MD_TICK);
            }
        }
        if (opt->enable_order()) {
            SetSubInfo(*subscribe_all, MD_ORDER, StockType);
            SetSubInfo(*subscribe_all, MD_ORDER, FundType);
            SetSubInfo(*subscribe_all, MD_ORDER, BondType);
            SetSubInfo(*subscribe_all, MD_ORDER, IndexType);
        }
        if (opt->enable_knock()) {
            SetSubInfo(*subscribe_all, MD_TRANSACTION, StockType);
            SetSubInfo(*subscribe_all, MD_TRANSACTION, FundType);
            SetSubInfo(*subscribe_all, MD_TRANSACTION, BondType);
            SetSubInfo(*subscribe_all, MD_TRANSACTION, IndexType);
        }
        while (true) {
            int rc = client_->SubscribeBySourceType(action_type, &(*subscribe_all));
            if (rc == 0) {
                LOG_INFO << "sub quotation ok";
                break;
            }
            LOG_ERROR << "sub quotation failed: " << get_error_code_value(rc) << ", retry in 3s ...";
            x::Sleep(3000);
        }
    }

    void InsightServer::SetSubInfo(SubscribeBySourceType& sub, const EMarketDataType& dtype, const ESecurityType& stype) {
        SubscribeBySourceTypeDetail* detail = sub.add_subscribebysourcetypedetail();
        SecuritySourceType* sub_info = new SecuritySourceType();
        sub_info->set_securitytype(stype);
        detail->set_allocated_securitysourcetypes(sub_info);
        detail->add_marketdatatypes(dtype);
    }
}

