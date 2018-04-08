cmake_minimum_required(VERSION 2.8)
project(Hello)

# 设置 version number
set (Hello_VERSION_MAJOR 1)
set (Hello_VERSION_MINOR 11)

configure_file(
    "${PROJECT_SOURCE_DIR}/HelloConfig.h.in"
    "${PROJECT_BINARY_DIR}/HelloConfig.h"
)

include_directories("${PROJECT_BINARY_DIR}")

add_executable(Hello hello.c)
