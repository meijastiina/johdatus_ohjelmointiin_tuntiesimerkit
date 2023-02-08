cmake_minimum_required(VERSION 3.5)

project(firstFunction LANGUAGES C)

add_executable(firstFunction main.c)

install(TARGETS firstFunction
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
