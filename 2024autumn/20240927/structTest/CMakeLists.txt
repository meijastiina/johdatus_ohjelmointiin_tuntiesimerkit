cmake_minimum_required(VERSION 3.16)

project(structTest LANGUAGES C)

add_executable(structTest main.c)

include(GNUInstallDirs)
install(TARGETS structTest
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
