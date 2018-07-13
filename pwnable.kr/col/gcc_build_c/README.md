# 使用GCC编译C语言代码

# 快捷编译
- gcc hello.c -o hello

## 步骤
1. 编写代码 hello.c
1. 预编译 gcc -E hello.c -o hello.i
1. 编译 gcc -S hello.i -o hello.s
1. 汇编 gcc -c hello.s -o hello.o
1. 链接 gcc hello.o -o hello
1. 编译完成使用 ./hello 运行

## 过程
预编译 -> 编译 -> 汇编 -> 链接

