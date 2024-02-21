cmake_minimum_required(VERSION 3.5)

project(aakkoset LANGUAGES C)

add_executable(aakkoset main.c)

install(TARGETS aakkoset
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
