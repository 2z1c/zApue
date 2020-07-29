PROJECT(zApueLibSrc) # 指定工程名称
CMAKE_MINIMUM_REQUIRED(VERSION 3.10.2) # 指定最小的版本


# 当前的路径
set(lib_src_DIR ${CMAKE_CURRENT_SOURCE_DIR})

# 将头文件路径设置



# 最后同步文件
ADD_SUBDIRECTORY(test) # 添加子项目文件
ADD_SUBDIRECTORY(Apue) # 添加子项目文件
ADD_SUBDIRECTORY(StrByte) # 添加子项目文件



# 最后打印数据
message(STATUS "${PROJECT_NAME}::Build the project of the dynamic library.")

