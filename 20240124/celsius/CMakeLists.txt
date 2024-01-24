cmake_minimum_required(VERSION 3.5)

project(celsius LANGUAGES C)

add_executable(celsius main.c)

install(TARGETS celsius
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
