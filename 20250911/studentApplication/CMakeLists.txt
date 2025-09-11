cmake_minimum_required(VERSION 3.16)

project(studentApplication LANGUAGES C)

add_executable(studentApplication main.c)

include(GNUInstallDirs)
install(TARGETS studentApplication
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
