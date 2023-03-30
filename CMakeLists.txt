cmake_minimum_required(VERSION 3.10)

project(firstQuestion VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(first src/main.cpp src/Professor.cpp 
src/Person.cpp src/Student.cpp)

target_include_directories(first PUBLIC "${CMAKE_SOURCE_DIR}/include")

add_compile_options(-g)