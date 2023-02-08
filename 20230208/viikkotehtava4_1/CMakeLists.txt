cmake_minimum_required(VERSION 3.5)

project(viikkotehtava4_1 LANGUAGES C)

add_executable(viikkotehtava4_1 main.c)

install(TARGETS viikkotehtava4_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
