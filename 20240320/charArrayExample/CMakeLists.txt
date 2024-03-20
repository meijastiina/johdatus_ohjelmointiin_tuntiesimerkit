cmake_minimum_required(VERSION 3.5)

project(charArrayExample LANGUAGES C)

add_executable(charArrayExample main.c)

install(TARGETS charArrayExample
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
