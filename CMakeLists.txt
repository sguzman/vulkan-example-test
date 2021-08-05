cmake_minimum_required(VERSION 3.20)
project(vulkan_example_test)

set(CMAKE_CXX_STANDARD 23)

include_directories(src)

add_executable(window
        src/window/main.cpp
        )

target_link_libraries(window glfw vulkan)