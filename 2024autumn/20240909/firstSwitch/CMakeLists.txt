cmake_minimum_required(VERSION 3.16)

project(firstSwitch LANGUAGES C)

add_executable(firstSwitch main.c)

include(GNUInstallDirs)
install(TARGETS firstSwitch
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
