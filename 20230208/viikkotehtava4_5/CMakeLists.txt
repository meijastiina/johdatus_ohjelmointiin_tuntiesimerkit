cmake_minimum_required(VERSION 3.5)

project(viikkotehtava4_5 LANGUAGES C)

add_executable(viikkotehtava4_5 main.c)

install(TARGETS viikkotehtava4_5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
