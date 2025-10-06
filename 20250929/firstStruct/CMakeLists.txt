cmake_minimum_required(VERSION 3.16)

project(firstStruct LANGUAGES C)

add_executable(firstStruct main.c)

include(GNUInstallDirs)
install(TARGETS firstStruct
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
