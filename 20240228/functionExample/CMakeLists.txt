cmake_minimum_required(VERSION 3.5)

project(functionExample LANGUAGES C)

add_executable(functionExample main.c)

install(TARGETS functionExample
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
