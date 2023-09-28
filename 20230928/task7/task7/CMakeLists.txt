cmake_minimum_required(VERSION 3.5)

project(task7 LANGUAGES C)

add_executable(task7 main.c)

install(TARGETS task7
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
