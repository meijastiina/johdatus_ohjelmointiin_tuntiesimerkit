cmake_minimum_required(VERSION 3.5)

project(viikkotehtava5-2_carArray LANGUAGES C)

add_executable(viikkotehtava5-2_carArray main.c)

install(TARGETS viikkotehtava5-2_carArray
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
