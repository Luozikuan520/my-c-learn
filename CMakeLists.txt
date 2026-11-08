cmake_minimum_required(VERSION 3.20)
project(my_c_learn C)

# 告诉 CLion 把 chapter3/printf_01.c 编译成一个叫 printf_01 的程序
add_executable(printf_01 chapter3/printf_01.c)
add_executable(array_count_list.c)