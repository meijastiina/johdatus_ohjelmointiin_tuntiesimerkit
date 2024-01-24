cmake_minimum_required(VERSION 3.5)

project(helloWorld LANGUAGES C)

add_executable(helloWorld main.c)

install(TARGETS helloWorld
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
