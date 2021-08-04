cmake_minimum_required(VERSION 3.20)
project(vulkan_example_test)

set(CMAKE_CXX_STANDARD 23)

include_directories(src)

add_executable(vulkan_example_test
        src/main.cpp
        src/main.h
        )