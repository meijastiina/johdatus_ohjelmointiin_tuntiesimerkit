cmake_minimum_required(VERSION 3.5)

project(viikkotehtava5-1_Car LANGUAGES C)

add_executable(viikkotehtava5-1_Car main.c)

install(TARGETS viikkotehtava5-1_Car
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
