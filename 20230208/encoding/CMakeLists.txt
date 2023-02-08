cmake_minimum_required(VERSION 3.5)

project(encoding LANGUAGES C)

add_executable(encoding main.c)

install(TARGETS encoding
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
