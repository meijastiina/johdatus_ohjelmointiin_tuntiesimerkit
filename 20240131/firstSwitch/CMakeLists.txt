cmake_minimum_required(VERSION 3.5)

project(firstSwitch LANGUAGES C)

add_executable(firstSwitch main.c)

install(TARGETS firstSwitch
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
