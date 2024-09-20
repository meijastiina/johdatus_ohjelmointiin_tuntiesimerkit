cmake_minimum_required(VERSION 3.16)

project(2-2_suurempiKahdesta LANGUAGES C)

add_executable(2-2_suurempiKahdesta main.c)

include(GNUInstallDirs)
install(TARGETS 2-2_suurempiKahdesta
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
