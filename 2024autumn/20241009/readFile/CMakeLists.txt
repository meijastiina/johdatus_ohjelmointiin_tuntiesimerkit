cmake_minimum_required(VERSION 3.16)

project(readFile LANGUAGES C)

add_executable(readFile main.c)

include(GNUInstallDirs)
install(TARGETS readFile
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
