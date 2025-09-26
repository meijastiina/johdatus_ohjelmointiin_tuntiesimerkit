cmake_minimum_required(VERSION 3.16)

project(viikkotehtava4-7_stringParameter LANGUAGES C)

add_executable(viikkotehtava4-7_stringParameter main.c)

include(GNUInstallDirs)
install(TARGETS viikkotehtava4-7_stringParameter
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
