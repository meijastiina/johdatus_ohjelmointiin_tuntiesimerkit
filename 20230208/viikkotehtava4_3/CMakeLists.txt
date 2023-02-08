cmake_minimum_required(VERSION 3.5)

project(viikkotehtava4_3 LANGUAGES C)

add_executable(viikkotehtava4_3 main.c)

install(TARGETS viikkotehtava4_3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
