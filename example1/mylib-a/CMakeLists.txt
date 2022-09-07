cmake_minimum_required(VERSION 3.15)
project(mylib-a CXX)

add_library(mylib-a src/mylib-a.cpp)
target_include_directories(mylib-a PUBLIC include)

set_target_properties(mylib-a PROPERTIES PUBLIC_HEADER "include/mylib-a.h")
install(TARGETS mylib-a)
