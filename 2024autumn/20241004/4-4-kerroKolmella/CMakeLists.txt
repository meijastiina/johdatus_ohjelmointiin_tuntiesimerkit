cmake_minimum_required(VERSION 3.16)

project(4-4-kerroKolmella LANGUAGES C)

add_executable(4-4-kerroKolmella main.c)

include(GNUInstallDirs)
install(TARGETS 4-4-kerroKolmella
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
