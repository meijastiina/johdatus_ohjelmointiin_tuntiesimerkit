cmake_minimum_required(VERSION 3.5)

project(viikkotehtava4_7_stringFunction LANGUAGES C)

add_executable(viikkotehtava4_7_stringFunction main.c)

install(TARGETS viikkotehtava4_7_stringFunction
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
