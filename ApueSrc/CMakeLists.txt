PROJECT(zApueSrc) # 指定工程名称
CMAKE_MINIMUM_REQUIRED(VERSION 3.10.2) # 指定最小的版本

# 当前的路径
set(Apue_src_DIR ${CMAKE_CURRENT_SOURCE_DIR})

# 最后添加子目录
ADD_SUBDIRECTORY(intro) # 添加子项目文件
ADD_SUBDIRECTORY(sockets) # 添加子项目文件
ADD_SUBDIRECTORY(printer) # 添加子项目文件
ADD_SUBDIRECTORY(ipc1) # 添加子项目文件


# 最后打印数据
message(STATUS "${PROJECT_NAME}::Compile Apue's project.")
