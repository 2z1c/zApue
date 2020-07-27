PROJECT(zApueIntro) # 指定工程名称
CMAKE_MINIMUM_REQUIRED(VERSION 3.10.2) # 指定最小的版本



#  ls1.c mycat.c
Set(__Exe_Pre ls1 mycat getcputc uidgid shell1)

# 开始遍历，生成对应的可执行文件
FOREACH(Exe_Pre ${__Exe_Pre})
  # message(STATUS ${Exe_Pre})
  FILE(GLOB ${Exe_Pre}_SRCS ${Exe_Pre}.c)
  ADD_EXECUTABLE(${Exe_Pre}.run ${${Exe_Pre}_SRCS})
  target_link_libraries(${Exe_Pre}.run pthread zApue)    
ENDFOREACH(Exe_Pre)
