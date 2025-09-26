cmake_minimum_required(VERSION 3.16)

project(vkotehtava4-8_atoi LANGUAGES C)

add_executable(vkotehtava4-8_atoi main.c)

include(GNUInstallDirs)
install(TARGETS vkotehtava4-8_atoi
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
