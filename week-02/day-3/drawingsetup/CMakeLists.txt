cmake_minimum_required(VERSION 3.14)
project(drawingsetup)

set(CMAKE_CXX_STANDARD 14)


set(SDL2_ROOT_PATH d:/programok/SDL2_windows)

set(EXECUTABLES "draw;line_in_the_middle;colored_box;diagonals;\
go_to_center;horizontal_lines;centered_square;\
four_rectangles;position_square;center_box_function;\
rainbow_box_function;checkerboard;function_to_center;\
connect_the_dots;starry_night")
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

IF(WIN32)
    set(MINGW_VERSION i686-w64-mingw32)
ENDIF()

find_package(SDL2_all REQUIRED)
