cmake_minimum_required(VERSION 3.16)

project(vkotehtava1-lampotila LANGUAGES C)

add_executable(vkotehtava1-lampotila main.c)

include(GNUInstallDirs)
install(TARGETS vkotehtava1-lampotila
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
