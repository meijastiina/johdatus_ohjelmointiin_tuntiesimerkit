cmake_minimum_required(VERSION 3.5)

project(multidimensionalArray LANGUAGES C)

add_executable(multidimensionalArray main.c)

install(TARGETS multidimensionalArray
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
