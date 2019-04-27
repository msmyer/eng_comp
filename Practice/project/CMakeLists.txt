cmake_minimum_required(VERSION 3.13)
project(project C)

set(CMAKE_C_STANDARD 99)


add_executable(ass1-soln ass1-soln.c)
target_link_libraries(ass1-soln m)


