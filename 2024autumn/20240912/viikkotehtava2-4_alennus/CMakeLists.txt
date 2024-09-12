cmake_minimum_required(VERSION 3.16)

project(viikkotehtava2-4_alennus LANGUAGES C)

add_executable(viikkotehtava2-4_alennus main.c)

include(GNUInstallDirs)
install(TARGETS viikkotehtava2-4_alennus
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
