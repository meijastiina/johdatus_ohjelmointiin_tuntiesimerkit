cmake_minimum_required(VERSION 3.5)

project(circleAndSquare LANGUAGES C)

add_executable(circleAndSquare main.c)

install(TARGETS circleAndSquare
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
