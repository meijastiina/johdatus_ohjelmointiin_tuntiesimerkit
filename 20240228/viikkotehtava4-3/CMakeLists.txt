cmake_minimum_required(VERSION 3.5)

project(viikkotehtava4-3 LANGUAGES C)

add_executable(viikkotehtava4-3 main.c)

install(TARGETS viikkotehtava4-3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
