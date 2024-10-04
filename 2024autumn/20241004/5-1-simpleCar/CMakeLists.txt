cmake_minimum_required(VERSION 3.16)

project(5-1-simpleCar LANGUAGES C)

add_executable(5-1-simpleCar main.c)

include(GNUInstallDirs)
install(TARGETS 5-1-simpleCar
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
