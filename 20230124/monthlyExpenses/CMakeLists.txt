cmake_minimum_required(VERSION 3.5)

project(monthlyExpenses LANGUAGES C)

add_executable(monthlyExpenses main.c)

install(TARGETS monthlyExpenses
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
