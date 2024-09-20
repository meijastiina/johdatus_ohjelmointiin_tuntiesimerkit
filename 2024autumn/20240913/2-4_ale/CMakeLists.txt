cmake_minimum_required(VERSION 3.16)

project(2-4_ale LANGUAGES C)

add_executable(2-4_ale main.c)

include(GNUInstallDirs)
install(TARGETS 2-4_ale
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
