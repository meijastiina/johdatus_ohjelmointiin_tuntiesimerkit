cmake_minimum_required(VERSION 3.16)

project(4-1_heiMaailma LANGUAGES C)

add_executable(4-1_heiMaailma main.c)

include(GNUInstallDirs)
install(TARGETS 4-1_heiMaailma
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
