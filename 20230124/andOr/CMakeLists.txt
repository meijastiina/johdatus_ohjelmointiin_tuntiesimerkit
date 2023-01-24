cmake_minimum_required(VERSION 3.5)

project(andOr LANGUAGES C)

add_executable(andOr main.c)

install(TARGETS andOr
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
