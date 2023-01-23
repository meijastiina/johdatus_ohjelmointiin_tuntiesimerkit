cmake_minimum_required(VERSION 3.5)

project(name LANGUAGES C)

add_executable(name main.c)

install(TARGETS name
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
