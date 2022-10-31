cmake_minimum_required(VERSION 3.23)
project(Competitive_programming)

set(CMAKE_CXX_STANDARD 14)

include_directories(DSA/DataStructures/LinkedList/base_code)

add_executable(Competitive_programming
        DSA/DataStructures/LinkedList/base_code/LinkedListTemplate.cpp
        DSA/DataStructures/LinkedList/base_code/LinkedListTemplate.h)
