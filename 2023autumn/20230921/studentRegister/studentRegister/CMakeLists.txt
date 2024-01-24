cmake_minimum_required(VERSION 3.5)

project(studentRegister LANGUAGES C)

add_executable(studentRegister main.c)

install(TARGETS studentRegister
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
