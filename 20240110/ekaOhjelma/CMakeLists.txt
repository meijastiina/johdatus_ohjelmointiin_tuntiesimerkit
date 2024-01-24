cmake_minimum_required(VERSION 3.5)

project(ekaOhjelma LANGUAGES C)

add_executable(ekaOhjelma main.c)

install(TARGETS ekaOhjelma
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
