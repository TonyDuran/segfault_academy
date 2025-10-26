cmake_minimum_required(VERSION 3.10)
project(segfault_academy LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Main library
add_library(segfault_academy
    src/vector.cpp
)
target_include_directories(segfault_academy PUBLIC include)

# Tests
enable_testing()
add_subdirectory(tests)

