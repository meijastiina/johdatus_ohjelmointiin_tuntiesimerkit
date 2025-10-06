cmake_minimum_required(VERSION 3.16)

project(viikkotehtava1-1-Car LANGUAGES C)

add_executable(viikkotehtava1-1-Car main.c)

include(GNUInstallDirs)
install(TARGETS viikkotehtava1-1-Car
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
