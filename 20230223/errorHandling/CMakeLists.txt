cmake_minimum_required(VERSION 3.5)

project(errorHandling LANGUAGES C)

add_executable(errorHandling main.c)

install(TARGETS errorHandling
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
