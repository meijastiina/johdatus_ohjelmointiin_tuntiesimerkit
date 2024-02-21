cmake_minimum_required(VERSION 3.5)

project(nestedLoop LANGUAGES C)

add_executable(nestedLoop main.c)

install(TARGETS nestedLoop
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
