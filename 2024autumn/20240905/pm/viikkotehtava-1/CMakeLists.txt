cmake_minimum_required(VERSION 3.16)

project(viikkotehtava-1 LANGUAGES C)

add_executable(viikkotehtava-1 main.c)

include(GNUInstallDirs)
install(TARGETS viikkotehtava-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
