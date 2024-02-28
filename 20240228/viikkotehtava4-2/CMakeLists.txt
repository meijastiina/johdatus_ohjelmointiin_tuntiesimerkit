cmake_minimum_required(VERSION 3.5)

project(viikkotehtava4-2 LANGUAGES C)

add_executable(viikkotehtava4-2 main.c)

install(TARGETS viikkotehtava4-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
