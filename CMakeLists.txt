cmake_minimum_required(VERSION 3.23)
project(Competitive_programming)

set(CMAKE_CXX_STANDARD 14)

include_directories(DataStructures/LinkedList/base_code)

add_executable(Competitive_programming
        DataStructures/LinkedList/base_code/LinkedListTemplate.cpp
        DataStructures/LinkedList/base_code/LinkedListTemplate.h)
