cmake_minimum_required(VERSION 3.16)

project(eka LANGUAGES C)

add_executable(eka main.c)

include(GNUInstallDirs)
install(TARGETS eka
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
