cmake_minimum_required(VERSION 3.29.2)
project(week-one-lab VERSION 1.0.0)

add_executable(hello_world hello.cpp)
target_sources(hello_world PRIVATE hello.cpp)
