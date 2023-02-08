cmake_minimum_required(VERSION 3.5)

project(viikkotehtava4_2 LANGUAGES C)

add_executable(viikkotehtava4_2 main.c)

install(TARGETS viikkotehtava4_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
