cmake_minimum_required(VERSION 3.5)

project(firstStruct LANGUAGES C)

add_executable(firstStruct main.c)

install(TARGETS firstStruct
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
