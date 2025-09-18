cmake_minimum_required(VERSION 3.16)

project(koetesti LANGUAGES C)

add_executable(koetesti main.c)

include(GNUInstallDirs)
install(TARGETS koetesti
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
