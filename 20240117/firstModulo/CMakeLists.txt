cmake_minimum_required(VERSION 3.5)

project(firstModulo LANGUAGES C)

add_executable(firstModulo main.c)

install(TARGETS firstModulo
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
