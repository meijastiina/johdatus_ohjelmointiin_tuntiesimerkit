cmake_minimum_required(VERSION 3.5)

project(errorHandling LANGUAGES C)

add_executable(errorHandling main.c myfunctions.c myfunctions.h)

install(TARGETS errorHandling
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
