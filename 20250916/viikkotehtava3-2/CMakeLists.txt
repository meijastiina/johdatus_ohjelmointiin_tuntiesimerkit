cmake_minimum_required(VERSION 3.16)

project(viikkotehtava3-2 LANGUAGES C)

add_executable(viikkotehtava3-2 main.c)

include(GNUInstallDirs)
install(TARGETS viikkotehtava3-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
