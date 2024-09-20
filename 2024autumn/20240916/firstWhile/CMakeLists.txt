cmake_minimum_required(VERSION 3.16)

project(firstWhile LANGUAGES C)

add_executable(firstWhile main.c)

include(GNUInstallDirs)
install(TARGETS firstWhile
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
