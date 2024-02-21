cmake_minimum_required(VERSION 3.5)

project(firstFor LANGUAGES C)

add_executable(firstFor main.c)

install(TARGETS firstFor
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
