PROJECT(zApueIntro) # 指定工程名称
CMAKE_MINIMUM_REQUIRED(VERSION 3.10.2) # 指定最小的版本
#  
FILE(GLOB showFilename_SRCS ls1.c)
ADD_EXECUTABLE(ls1.run ${showFilename_SRCS})
target_link_libraries(ls1.run pthread zApue)
