cmake_minimum_required(VERSION 3.5)

project(viikkotehtava2-2 LANGUAGES C)

add_executable(viikkotehtava2-2 main.c)

install(TARGETS viikkotehtava2-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
