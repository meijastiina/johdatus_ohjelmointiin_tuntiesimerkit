cmake_minimum_required(VERSION 3.16)

project(vkotehtava2-2 LANGUAGES C)

add_executable(vkotehtava2-2 main.c)

include(GNUInstallDirs)
install(TARGETS vkotehtava2-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
