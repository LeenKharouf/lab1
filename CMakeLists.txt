cmake_minimum_required(VERSION 3.29.2)
project(week-one-lab VERSION 1.0.0)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Add executable
add_executable(hello_world src/hello.cpp src/name.cpp)
