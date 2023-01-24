cmake_minimum_required(VERSION 3.5)

project(switchCase LANGUAGES C)

add_executable(switchCase main.c)

install(TARGETS switchCase
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
