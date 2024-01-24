cmake_minimum_required(VERSION 3.5)

project(calculations LANGUAGES C)

add_executable(calculations main.c)

install(TARGETS calculations
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
