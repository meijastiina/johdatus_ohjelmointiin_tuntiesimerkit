cmake_minimum_required(VERSION 3.16)

project(skandit LANGUAGES C)

add_executable(skandit main.c)

include(GNUInstallDirs)
install(TARGETS skandit
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
