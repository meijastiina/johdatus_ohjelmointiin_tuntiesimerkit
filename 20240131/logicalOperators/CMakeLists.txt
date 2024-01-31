cmake_minimum_required(VERSION 3.5)

project(logicalOperators LANGUAGES C)

add_executable(logicalOperators main.c)

install(TARGETS logicalOperators
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
