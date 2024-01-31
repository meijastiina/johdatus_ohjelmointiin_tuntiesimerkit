cmake_minimum_required(VERSION 3.5)

project(firstArray LANGUAGES C)

add_executable(firstArray main.c)

install(TARGETS firstArray
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
