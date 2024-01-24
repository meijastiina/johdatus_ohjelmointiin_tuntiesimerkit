cmake_minimum_required(VERSION 3.5)

project(firstSum LANGUAGES C)

add_executable(firstSum main.c)

install(TARGETS firstSum
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
