cmake_minimum_required(VERSION 3.5)

project(viikkotehtava5-3 LANGUAGES C)

add_executable(viikkotehtava5-3 main.c)

install(TARGETS viikkotehtava5-3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
