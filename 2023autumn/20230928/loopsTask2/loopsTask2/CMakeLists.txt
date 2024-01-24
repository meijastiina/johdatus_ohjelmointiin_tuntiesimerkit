cmake_minimum_required(VERSION 3.5)

project(loopsTask2 LANGUAGES C)

add_executable(loopsTask2 main.c)

install(TARGETS loopsTask2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
