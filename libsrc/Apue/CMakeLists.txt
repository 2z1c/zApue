PROJECT(zApueLibApue) # 指定工程名称
# 指定源文件
# AUX_SOURCE_DIRECTORY(. DIR_SRCS) # 同步当前文件夹的所有文件到 DIR_SRCS 变量

FILE(GLOB DIR_SRCS bufargs.c cliconn.c clrfl.c 
daemonize.c error.c errorlog.c lockreg.c locktest.c 
openmax.c pathalloc.c popen.c prexit.c prmask.c 
ptyfork.c ptyopen.c readn.c recvfd.c senderr.c sendfd.c 
servaccept.c servlisten.c setfd.c setfl.c signal.c signalintr.c 
sleepus.c spipe.c tellwait.c ttymodes.c writen.c)

# 添加头文件
FILE(GLOB DIR_Headers apue.h)

include_directories(.)


                        
# 生成动态库
add_library(zApue SHARED  ${DIR_Headers} ${DIR_SRCS} )


# 设置好路径，准备将动态库复制发布文件中

set_target_properties(zApue
        PROPERTIES
        LIBRARY_OUTPUT_DIRECTORY
        "${Lib_Distribution_DIR}")



# message(STATUS ${DIR_Headers})
        
# copy out lib header file...
add_custom_command(TARGET zApue POST_BUILD
        COMMAND "${CMAKE_COMMAND}" -E
        copy "${CMAKE_CURRENT_SOURCE_DIR}/apue.h"
        "${Lib_IncludeDistribution_DIR}/apue.h"
        #                   **** the following 2 lines are for potential future debug purpose ****
        #                   COMMAND "${CMAKE_COMMAND}" -E
        #                   remove_directory "${CMAKE_CURRENT_BINARY_DIR}"
        COMMENT "Copying ${PROJECT_NAME} to output directory")
 