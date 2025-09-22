cmake_minimum_required(VERSION 3.16)

project(firstFunction LANGUAGES C)

add_executable(firstFunction main.c)

include(GNUInstallDirs)
install(TARGETS firstFunction
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
