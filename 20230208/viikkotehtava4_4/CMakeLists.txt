cmake_minimum_required(VERSION 3.5)

project(viikkotehtava4_4 LANGUAGES C)

add_executable(viikkotehtava4_4 main.c)

install(TARGETS viikkotehtava4_4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
