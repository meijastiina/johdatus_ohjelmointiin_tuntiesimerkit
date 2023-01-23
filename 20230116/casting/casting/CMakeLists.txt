cmake_minimum_required(VERSION 3.5)

project(casting LANGUAGES C)

add_executable(casting main.c)

install(TARGETS casting
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
