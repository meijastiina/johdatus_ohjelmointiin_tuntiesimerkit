cmake_minimum_required(VERSION 3.5)

project(viikkotehtava4_6 LANGUAGES C)

add_executable(viikkotehtava4_6 main.c)

install(TARGETS viikkotehtava4_6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
