cmake_minimum_required(VERSION 3.14)
project(Blog)

set(CMAKE_CXX_STANDARD 14)

add_executable(Blog main.cpp BlogPost.cpp BlogPost.h Blog.cpp Blog.h)