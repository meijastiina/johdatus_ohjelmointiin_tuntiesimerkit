cmake_minimum_required(VERSION 3.5)

project(structs LANGUAGES C)

add_executable(structs main.c)

install(TARGETS structs
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
