注意事项 cmake 编绎的文件启动会崩溃， 用makefile

# v1.0.26 (2024-10-25)
* 优化解析，改为无锁队列的方式
* 多次查询合约信息，确保能查成功
* 期权和期权，如果没有静态数据，直接过滤掉

# v1.0.25 (2024-06-21)
* 升级api, 改为cmake

# v1.0.24 (2024-06-17)
* 增加北交所行情的处理

# v1.0.22 (2023-08-07)
* 升级libfeeder支持逐笔数据的Pub功能

# v1.0.21 (2023-04-19)
* 修复合约的交易状态

# v1.0.20 (2023-01-31)
* 升级api, api在ubuntu20.04, gcc8.3.0的环境, 采用protobuf-3.21.4编绎成的

# v1.0.19 (2022-09-28)
* 增加期权与期货的数据解析
* 落地静态数据, 存csv文件

# v1.0.18 (2022-08-29)
* 增加api日志开发关与压缩开关
* 重构报单与成交的解析方式, 在string上直接修改

# v1.0.17 (2022-05-07)
* 支持集合竞价虚拟撮合盘口；
* 集合竞价不推送全息行情；

# v1.0.16 (2022-03-16)
* 打开api的日志
* 关闭api的日志，改回18.04的环境

# v1.0.15 (2022-03-04)
* 指数行情中，过滤掉无意义的数据，即一个标的前后两个Tick的new_price与sum_volume皆无变化

# v1.0.14 (2022-01-10)
* 增加close price的值

# v1.0.13 (2021-12-31)
* fix sz holo

# v1.0.12 (2021-12-28)
* fix holo

# v1.0.11 (2021-12-21)
* 上海债券逐笔委托逻辑修改

# v1.0.10 (2021-12-16)
* Bugfix: 修复上海行情的bug

# v1.0.9 (2021-12-10)
* 使用上海逐笔数据中的撤单信息

# v1.0.8 (2021-12-09)
* 逐笔数据中添加recv_time字段

# v1.0.7 (2021-11-22)
* 查询静态信息,添加合约名称, 一次只能查询一个securityidsource

# v1.0.6 (2021-09-23)
* 修复沪市全息行情切片中可能出现bp1>=ap1的问题

# v1.0.5 (2021-09-06)

# v1.0.4 (2021-02-18)
* 升级api, 增加上海逐笔委托的功能

# v1.0.3 (2021-02-18)
* 修改功能：重命名feeder_insight为feeder_huatai_insight

# v1.0.2 (2020-05-07)
* Bugfix: 修正CSI和CNI指数的数量单位；

# v1.0.1 (2020-03-04)
* 增加国证指数的支持

# v1.0.0 (2019-06-25)
* 初始版本
