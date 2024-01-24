cmake_minimum_required(VERSION 3.5)

project(kertaus LANGUAGES C)

add_executable(kertaus main.c)

install(TARGETS kertaus
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
