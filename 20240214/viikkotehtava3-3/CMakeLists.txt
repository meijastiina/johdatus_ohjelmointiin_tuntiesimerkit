cmake_minimum_required(VERSION 3.5)

project(viikkotehtava3-3 LANGUAGES C)

add_executable(viikkotehtava3-3 main.c)

install(TARGETS viikkotehtava3-3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
