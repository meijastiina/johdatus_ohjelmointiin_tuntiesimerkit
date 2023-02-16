cmake_minimum_required(VERSION 3.5)

project(viikkotehtava5_1 LANGUAGES C)

add_executable(viikkotehtava5_1 main.c)

install(TARGETS viikkotehtava5_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
