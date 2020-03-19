cmake_minimum_required(VERSION 3.15)
project(redis_demo C)

set(CMAKE_C_STANDARD 99)

add_executable(redis_demo main.c)
TARGET_LINK_LIBRARIES(redis_demo hiredis)