cmake_minimum_required(VERSION 3.16)

project(viikkotehtavat1 LANGUAGES C)

add_executable(viikkotehtavat1 main.c)

include(GNUInstallDirs)
install(TARGETS viikkotehtavat1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
