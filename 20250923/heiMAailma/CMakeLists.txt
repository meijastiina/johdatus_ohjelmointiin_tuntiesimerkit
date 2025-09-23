cmake_minimum_required(VERSION 3.16)

project(heiMAailma LANGUAGES C)

add_executable(heiMAailma main.c)

include(GNUInstallDirs)
install(TARGETS heiMAailma
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
