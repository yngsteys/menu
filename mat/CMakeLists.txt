cmake_minimum_required(VERSION 3.26)
project(menu)

set(CMAKE_CXX_STANDARD 14)

add_executable(menu
        main.cpp
        menu_functions.cpp
        menu.hpp
        menu_items.hpp
        menu_items.cpp)
