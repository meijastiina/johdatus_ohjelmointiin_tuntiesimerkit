cmake_minimum_required(VERSION 3.16)

project(kertausta LANGUAGES C)

add_executable(kertausta main.c)

include(GNUInstallDirs)
install(TARGETS kertausta
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
