cmake_minimum_required(VERSION 3.5)

project(firstIf LANGUAGES C)

add_executable(firstIf main.c)

install(TARGETS firstIf
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
