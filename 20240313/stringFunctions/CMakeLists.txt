cmake_minimum_required(VERSION 3.5)

project(stringFunctions LANGUAGES C)

add_executable(stringFunctions main.c)

install(TARGETS stringFunctions
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
