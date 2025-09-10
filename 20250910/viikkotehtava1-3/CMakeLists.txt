cmake_minimum_required(VERSION 3.16)

project(viikkotehtava1-3 LANGUAGES C)

add_executable(viikkotehtava1-3 main.c)

include(GNUInstallDirs)
install(TARGETS viikkotehtava1-3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
