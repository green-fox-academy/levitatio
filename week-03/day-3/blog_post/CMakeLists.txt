cmake_minimum_required(VERSION 3.14)
project(blog_post)

set(CMAKE_CXX_STANDARD 14)

add_executable(blog_post main.cpp BlogPost.cpp BlogPost.h)