cmake_minimum_required(VERSION 3.5)

project(sum LANGUAGES C)

add_executable(sum main.c)

install(TARGETS sum
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
