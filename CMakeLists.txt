cmake_minimum_required(VERSION 3.16)
project(feeder_huatai_insight)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")

message("*****************************************")
find_package(X REQUIRED)
include_directories(${X_INCLUDE_DIRS})
link_directories(${X_LIBRARY_DIRS})

find_package(CORAL REQUIRED)
include_directories(${CORAL_INCLUDE_DIRS})
link_directories(${CORAL_LIBRARY_DIRS})

find_package(FEEDER REQUIRED)
include_directories(${FEEDER_INCLUDE_DIRS})
link_directories(${FEEDER_LIBRARY_DIRS})
message("*****************************************")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib/libinsight-2.1.0/include/ace-6.4.3)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib/libinsight-2.1.0/include/mdc_gateway_client/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib/libinsight-2.1.0/include/mdc_gateway_client/protobuf)

link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib/libinsight-2.1.0/lib)

add_executable(feeder_huatai_insight
        src/insight_feeder/main.cc
        src/insight_feeder/config.h
        src/insight_feeder/define.h
        src/insight_feeder/insight_server.h
        src/insight_feeder/insight_handler.h
        src/insight_feeder/insight_server.cc
        src/insight_feeder/insight_support.h
        src/insight_feeder/insight_handler.cc
        src/insight_feeder/insight_support.cc
        src/insight_feeder/config.cc
        )

target_link_libraries(feeder_huatai_insight  aeron_client_shared aeron_driver ACE ACE_SSL mdc_gateway_client ssl feeder coral swordfish x stdc++fs yaml-cpp clickhouse-cpp-lib-static boost_date_time boost_filesystem boost_regex boost_system  boost_chrono boost_log boost_program_options boost_thread boost_iostreams z protobuf protobuf-lite sodium zmq ssl crypto iconv pthread dl)

FILE(GLOB LIBS_NAME "${CMAKE_CURRENT_LIST_DIR}/lib/libinsight-2.1.0/lib/*so*")
FILE(COPY ${LIBS_NAME} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

add_custom_target(jieya COMMAND unzip -o -q ${CMAKE_CURRENT_SOURCE_DIR}/lib/libinsight-2.1.0.zip -d ${CMAKE_CURRENT_SOURCE_DIR}/lib)

add_custom_target(image
        COMMAND cp -rf ${CMAKE_CURRENT_SOURCE_DIR}/Dockerfile ${CMAKE_CURRENT_BINARY_DIR}
        COMMAND sh -c "cp -rf ${CMAKE_CURRENT_SOURCE_DIR}/conf/*.pem ${CMAKE_CURRENT_BINARY_DIR}"
        COMMAND sh -c "cp -rf ${CMAKE_CURRENT_SOURCE_DIR}/lib/libinsight-2.1.0/lib/libACE.so.6.4.3 ${CMAKE_CURRENT_BINARY_DIR}"
        COMMAND sh -c "cp -rf ${CMAKE_CURRENT_SOURCE_DIR}/lib/libinsight-2.1.0/lib/libACE_SSL.so.6.4.3 ${CMAKE_CURRENT_BINARY_DIR}"
        COMMAND sh -c "ldd ${PROJECT_NAME} | grep '=>' | grep -v '/usr/lib/' | awk '{print $3}' | xargs -i cp -L -n {} .;"
        COMMAND sh -c "n=${PROJECT_NAME}; v=`./${PROJECT_NAME} -v`; \
            docker build -t $n:$v .; \
            rm -rf \${n}_$v.docker.tar.gz; \
            docker save $n:$v > \${n}_$v.docker.tar && gzip \${n}_$v.docker.tar"
        DEPENDS ${PROJECT_NAME}
        VERBATIM)
