cmake_minimum_required(VERSION 3.13)
project(week2 C)

set(CMAKE_C_STANDARD 99)
add_executable(axb axb.c)
add_executable(main main.c)
add_executable(test test.c)
add_executable(workshop2 workshop2.c)
add_executable(change_calc change_calc.c)
add_executable(basic_change_calc basic_change_calc.c)
add_executable(tute2 tute2.c)
add_executable(isprime isprime.c)

target_link_libraries(change_calc m)