cmake_minimum_required(VERSION 3.16)

project(lokaali LANGUAGES C)

add_executable(lokaali main.c)

include(GNUInstallDirs)
install(TARGETS lokaali
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
