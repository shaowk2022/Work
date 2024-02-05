cmake_minimum_required(VERSION 3.10)
project(DDS_Example)

if(NOT DEFINED NDDSHOME)
    message("set NDDSHOME ...")
    set(NDDSHOME "/home/wenke/work/rti_connext_dds-6.1.1")
endif()

if(NOT DEFINED TARGET_ARCH)
    set(TARGET_ARCH x64Linux4gcc7.3.0)
endif()

if(NOT DEFINED COMPLIER_PATH)
    set(COMPLIER_PATH /usr/bin/g++)
endif()

# 可执行程序输出目录
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin/)

# 指定库文件搜索目录
link_directories(${NDDSHOME}/lib/${TARGET_ARCH})
# 设置编译选项
set(COMPLIER_FLAGS -m64 -Wall -std=c++14 -DRTI_UNIX -DRTI_LINUX -DRTI_64BIT)
add_compile_options(${COMPLIER_FLAGS})

set(SUB_FILE "${CMAKE_CURRENT_SOURCE_DIR}/listeners_subscriber.cxx")
set(PUB_FILE "${CMAKE_CURRENT_SOURCE_DIR}/listeners_publisher.cxx")

# 设置头文件目录和链接库名称
set(INCLUDE_DIR 
    ${NDDSHOME}/include
    ${NDDSHOME}/include/ndds
    ${NDDSHOME}/include/ndds/hpp
)
set(LIBRARIES
    nddscored
    nddscd
    nddscpp2d
    dl  # 对应 -ldl
    m   # 对应 -lm
    pthread # 对应 -lpthread
    rt  # 对应 -lrt
    -no-pie  # 直接添加选项 -no-pie
    -rdynamic  # 直接添加选项 -rdynamic
)

# 找到所有源文件
file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/*.cxx)
# 排除subscriber源文件
list(REMOVE_ITEM SRC_LIST ${SUB_FILE})
add_executable(Example_Publisher ${SRC_LIST})
target_include_directories(
    Example_Publisher PRIVATE
    ${INCLUDE_DIR}
)
target_link_libraries(Example_Publisher
    ${LIBRARIES}
)

# 附加subscriber源文件，移除publisher源文件
list(APPEND SRC_LIST ${SUB_FILE})
list(REMOVE_ITEM SRC_LIST ${PUB_FILE})
add_executable(Example_Subscriber ${SRC_LIST})
target_include_directories(
    Example_Subscriber PRIVATE
    ${INCLUDE_DIR}
)
target_link_libraries(Example_Subscriber
    ${LIBRARIES}
)