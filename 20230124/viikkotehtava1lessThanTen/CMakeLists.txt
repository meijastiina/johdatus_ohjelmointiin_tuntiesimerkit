cmake_minimum_required(VERSION 3.5)

project(viikkotehtava1lessThanTen LANGUAGES C)

add_executable(viikkotehtava1lessThanTen main.c)

install(TARGETS viikkotehtava1lessThanTen
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
