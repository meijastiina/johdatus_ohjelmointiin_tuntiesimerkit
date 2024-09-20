cmake_minimum_required(VERSION 3.16)

project(3-2_name LANGUAGES C)

add_executable(3-2_name main.c)

include(GNUInstallDirs)
install(TARGETS 3-2_name
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
