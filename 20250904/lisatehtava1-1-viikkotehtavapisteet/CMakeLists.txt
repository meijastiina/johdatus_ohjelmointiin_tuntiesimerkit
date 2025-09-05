cmake_minimum_required(VERSION 3.16)

project(lisatehtava1-1-viikkotehtavapisteet LANGUAGES C)

add_executable(lisatehtava1-1-viikkotehtavapisteet main.c)

include(GNUInstallDirs)
install(TARGETS lisatehtava1-1-viikkotehtavapisteet
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
