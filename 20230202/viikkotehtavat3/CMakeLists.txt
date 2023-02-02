cmake_minimum_required(VERSION 3.5)

project(viikkotehtavat3 LANGUAGES C)

add_executable(viikkotehtavat3 main.c)

install(TARGETS viikkotehtavat3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
