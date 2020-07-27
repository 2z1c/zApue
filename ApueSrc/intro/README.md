# 小结学习
## ls1.c
```c
-   opendir  打开一个文件夹，
-   readdir  读取文件夹句柄，返回dirent指针， 
  - dirent 结构体 文件夹索引作用
```

## mycat.c
```c
-   STDIN_FILENO 标准输入
-   STDOUT_FILENO 标准输出
-   STDERR_FILENO 标准错误
```

## getcputc.c
```c
-  EOF标志
-  putc  & getc
```

## uidgid.c
```c
-   getuid  # 用户ID
-   getgid  # 组用户ID，对用户ID的封装
-   getpid  # 进程ID
```

## shell1.c
```c
-   fork  # 创建新进程，返回子进程的PID，为0表示为子进程
-   execlp  # exec 族系列的函数
```




