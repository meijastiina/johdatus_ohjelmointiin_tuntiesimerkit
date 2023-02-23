cmake_minimum_required(VERSION 3.5)

project(readFile LANGUAGES C)

add_executable(readFile main.c)

install(TARGETS readFile
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
