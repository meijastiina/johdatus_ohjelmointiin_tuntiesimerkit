cmake_minimum_required(VERSION 3.5)

project(tiedostot LANGUAGES C)

add_executable(tiedostot main.c)

install(TARGETS tiedostot
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
