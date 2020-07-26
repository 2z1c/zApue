PROJECT(zApueLibtest) # 指定工程名称
# 指定源文件
AUX_SOURCE_DIRECTORY(. DIR_SRCS) # 同步当前文件夹的所有文件到 DIR_SRCS 变量

# 添加头文件
FILE(GLOB DIR_Headers "*.h")

include_directories(.)

# 生成动态库
add_library(zApueTest SHARED  ${DIR_Headers} ${DIR_SRCS} )


# 设置好路径，准备将动态库复制发布文件中

set_target_properties(zApueTest
        PROPERTIES
        LIBRARY_OUTPUT_DIRECTORY
        "${Lib_Distribution_DIR}")



# message(STATUS ${DIR_Headers})
        
# copy out lib header file...
add_custom_command(TARGET zApueTest POST_BUILD
        COMMAND "${CMAKE_COMMAND}" -E
        copy "${CMAKE_CURRENT_SOURCE_DIR}/test.h"
        "${Lib_IncludeDistribution_DIR}/test.h"
        #                   **** the following 2 lines are for potential future debug purpose ****
        #                   COMMAND "${CMAKE_COMMAND}" -E
        #                   remove_directory "${CMAKE_CURRENT_BINARY_DIR}"
        COMMENT "Copying ${PROJECT_NAME} to output directory")
 