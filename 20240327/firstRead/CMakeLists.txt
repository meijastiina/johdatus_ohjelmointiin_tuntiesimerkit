cmake_minimum_required(VERSION 3.5)

project(firstRead LANGUAGES C)

add_executable(firstRead main.c)

install(TARGETS firstRead
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
