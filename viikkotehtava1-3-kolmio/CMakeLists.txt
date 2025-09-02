cmake_minimum_required(VERSION 3.16)

project(viikkotehtava1-3-kolmio LANGUAGES C)

add_executable(viikkotehtava1-3-kolmio main.c)

include(GNUInstallDirs)
install(TARGETS viikkotehtava1-3-kolmio
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
