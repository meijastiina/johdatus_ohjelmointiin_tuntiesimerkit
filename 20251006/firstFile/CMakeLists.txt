cmake_minimum_required(VERSION 3.16)

project(firstFile LANGUAGES C)

add_executable(firstFile main.c)

include(GNUInstallDirs)
install(TARGETS firstFile
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
