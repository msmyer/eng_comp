cmake_minimum_required(VERSION 3.13)
project(Shop C)

set(CMAKE_C_STANDARD 99)

add_executable(Shop
        src/change_calc.h
        src/change_calc.c
        src/shopping_sim.c src/change_calc.c)