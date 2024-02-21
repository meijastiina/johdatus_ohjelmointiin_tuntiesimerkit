cmake_minimum_required(VERSION 3.5)

project(firstDoWhile LANGUAGES C)

add_executable(firstDoWhile main.c)

install(TARGETS firstDoWhile
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
