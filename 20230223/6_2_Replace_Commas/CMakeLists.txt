cmake_minimum_required(VERSION 3.5)

project(6_2_Replace_Commas LANGUAGES C)

add_executable(6_2_Replace_Commas main.c)

install(TARGETS 6_2_Replace_Commas
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
