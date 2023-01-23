cmake_minimum_required(VERSION 3.5)

project(muuttujaOsoite LANGUAGES C)

add_executable(muuttujaOsoite main.c)

install(TARGETS muuttujaOsoite
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
