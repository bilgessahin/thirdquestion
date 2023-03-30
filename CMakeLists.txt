cmake_minimum_required(VERSION 3.10)

project(thirdQuestion VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(third src/main.cpp src/Node.cpp 
src/LRUCache.cpp)

target_include_directories(third PUBLIC "${CMAKE_SOURCE_DIR}/include")

add_compile_options(-g)