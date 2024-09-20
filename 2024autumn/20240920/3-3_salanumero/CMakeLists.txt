cmake_minimum_required(VERSION 3.16)

project(3-3_salanumero LANGUAGES C)

add_executable(3-3_salanumero main.c)

include(GNUInstallDirs)
install(TARGETS 3-3_salanumero
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
