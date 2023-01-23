cmake_minimum_required(VERSION 3.5)

project(sweets LANGUAGES C)

add_executable(sweets main.c)

install(TARGETS sweets
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
