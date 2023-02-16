cmake_minimum_required(VERSION 3.5)

project(first LANGUAGES C)

add_executable(first main.c)

install(TARGETS first
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
