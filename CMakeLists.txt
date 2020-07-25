PROJECT(zApue) # 指定工程名称
CMAKE_MINIMUM_REQUIRED(VERSION 3.10.2) # 指定最小的版本
# 添加通用的头文件路径
include_directories(./include)
# 将头文件路径设置
ADD_SUBDIRECTORY(temp) # 添加子项目文件
