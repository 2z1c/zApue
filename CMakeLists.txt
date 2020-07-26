PROJECT(zApue) # 指定工程名称
CMAKE_MINIMUM_REQUIRED(VERSION 3.10.2) # 指定最小的版本

# ---------------------------
# 设置一些路径的值
# ---------------------------
set(zApue_root_DIR ${CMAKE_CURRENT_SOURCE_DIR})

# 添加生成动态库的工程路径
# ADD_SUBDIRECTORY(libsrc)

# 设置好编译路径
set(zApue_build_DIR ${zApue_root_DIR}/tmp)

# 设置好动态库发布的路径
set(Lib_Distribution_DIR ${zApue_root_DIR}/lib)
# 设置好头文件的路径
set(Lib_IncludeDistribution_DIR  ${zApue_root_DIR}/include)


# ---------------------------
# 添加编译是的路径
# ---------------------------
# 添加通用的头文件路径
message(STATUS ${Lib_IncludeDistribution_DIR})
include_directories(${Lib_IncludeDistribution_DIR})
link_directories(${Lib_Distribution_DIR})


# ---------------------------
# 编译时的一些其他需要修改的东西 
# ---------------------------

# 创建编译的临时文件
file(MAKE_DIRECTORY ${zApue_build_DIR})

# ---------------------------
# 最后添加子文件
# ---------------------------

# 1. 首先依赖库
ADD_SUBDIRECTORY(${zApue_root_DIR}/libsrc ${zApue_build_DIR}/libsrc)

# 2. 添加需要的编译的项目
ADD_SUBDIRECTORY(${zApue_root_DIR}/temp ${zApue_build_DIR}/temp) 







