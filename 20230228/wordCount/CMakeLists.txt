cmake_minimum_required(VERSION 3.5)

project(wordCount LANGUAGES C)

add_executable(wordCount main.c)

install(TARGETS wordCount
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
