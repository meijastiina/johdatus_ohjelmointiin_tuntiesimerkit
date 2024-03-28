cmake_minimum_required(VERSION 3.5)

project(libraryExample LANGUAGES C)

add_executable(libraryExample main.c filehandling.h filehandling.c)

install(TARGETS libraryExample
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
