cmake_minimum_required(VERSION 3.5)

project(firstWhile LANGUAGES C)

add_executable(firstWhile main.c)

install(TARGETS firstWhile
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
