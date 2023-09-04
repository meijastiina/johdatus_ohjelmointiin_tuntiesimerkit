cmake_minimum_required(VERSION 3.5)

project(printf LANGUAGES C)

add_executable(printf main.c)

install(TARGETS printf
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
