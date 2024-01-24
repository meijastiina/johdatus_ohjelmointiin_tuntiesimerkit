cmake_minimum_required(VERSION 3.5)

project(helloWorld2 LANGUAGES C)

add_executable(helloWorld2 main.c)

install(TARGETS helloWorld2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
