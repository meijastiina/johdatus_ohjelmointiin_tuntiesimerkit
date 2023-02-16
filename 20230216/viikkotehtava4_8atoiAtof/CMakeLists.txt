cmake_minimum_required(VERSION 3.5)

project(viikkotehtava4_8atoiAtof LANGUAGES C)

add_executable(viikkotehtava4_8atoiAtof main.c)

install(TARGETS viikkotehtava4_8atoiAtof
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
