cmake_minimum_required(VERSION 3.5)

project(firstExamples LANGUAGES C)

add_executable(firstExamples main.c)

install(TARGETS firstExamples
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
