cmake_minimum_required(VERSION 3.5)

project(multiplicationTable LANGUAGES C)

add_executable(multiplicationTable main.c)

install(TARGETS multiplicationTable
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
