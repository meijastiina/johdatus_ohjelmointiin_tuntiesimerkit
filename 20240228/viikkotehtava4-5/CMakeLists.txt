cmake_minimum_required(VERSION 3.5)

project(viikkotehtava4-5 LANGUAGES C)

add_executable(viikkotehtava4-5 main.c)

install(TARGETS viikkotehtava4-5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
