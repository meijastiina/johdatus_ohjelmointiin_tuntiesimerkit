cmake_minimum_required(VERSION 3.16)

project(firstIf LANGUAGES C)

add_executable(firstIf main.c)

include(GNUInstallDirs)
install(TARGETS firstIf
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
