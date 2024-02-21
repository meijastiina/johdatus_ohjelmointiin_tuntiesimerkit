cmake_minimum_required(VERSION 3.5)

project(sumOfEvenNumbers LANGUAGES C)

add_executable(sumOfEvenNumbers main.c)

install(TARGETS sumOfEvenNumbers
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
