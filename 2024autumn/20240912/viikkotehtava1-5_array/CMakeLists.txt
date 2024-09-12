cmake_minimum_required(VERSION 3.16)

project(viikkotehtava1-5_array LANGUAGES C)

add_executable(viikkotehtava1-5_array main.c)

include(GNUInstallDirs)
install(TARGETS viikkotehtava1-5_array
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
