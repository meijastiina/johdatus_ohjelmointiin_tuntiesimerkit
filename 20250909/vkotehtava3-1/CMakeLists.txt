cmake_minimum_required(VERSION 3.16)

project(vkotehtava3-1 LANGUAGES C)

add_executable(vkotehtava3-1 main.c)

include(GNUInstallDirs)
install(TARGETS vkotehtava3-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
