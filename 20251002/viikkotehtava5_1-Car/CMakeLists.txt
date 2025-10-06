cmake_minimum_required(VERSION 3.16)

project(viikkotehtava5_1-Car LANGUAGES C)

add_executable(viikkotehtava5_1-Car main.c)

include(GNUInstallDirs)
install(TARGETS viikkotehtava5_1-Car
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
