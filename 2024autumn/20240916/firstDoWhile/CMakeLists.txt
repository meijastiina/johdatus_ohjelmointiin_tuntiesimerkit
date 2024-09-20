cmake_minimum_required(VERSION 3.16)

project(firstDoWhile LANGUAGES C)

add_executable(firstDoWhile main.c)

include(GNUInstallDirs)
install(TARGETS firstDoWhile
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
