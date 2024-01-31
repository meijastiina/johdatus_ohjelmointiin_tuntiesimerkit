cmake_minimum_required(VERSION 3.5)

project(viikkotehtava2-1 LANGUAGES C)

add_executable(viikkotehtava2-1 main.c)

install(TARGETS viikkotehtava2-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
