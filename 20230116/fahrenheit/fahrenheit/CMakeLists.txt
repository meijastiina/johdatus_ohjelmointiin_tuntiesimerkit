cmake_minimum_required(VERSION 3.5)

project(fahrenheit LANGUAGES C)

add_executable(fahrenheit main.c)

install(TARGETS fahrenheit
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
