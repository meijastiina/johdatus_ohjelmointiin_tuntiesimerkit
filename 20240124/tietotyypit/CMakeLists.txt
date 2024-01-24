cmake_minimum_required(VERSION 3.5)

project(tietotyypit LANGUAGES C)

add_executable(tietotyypit main.c)

install(TARGETS tietotyypit
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
