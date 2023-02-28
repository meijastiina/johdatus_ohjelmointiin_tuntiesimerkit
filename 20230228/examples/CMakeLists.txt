cmake_minimum_required(VERSION 3.5)

project(examples LANGUAGES C)

add_executable(examples main.c myFunctions.h myFunctions.c)

install(TARGETS examples
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
