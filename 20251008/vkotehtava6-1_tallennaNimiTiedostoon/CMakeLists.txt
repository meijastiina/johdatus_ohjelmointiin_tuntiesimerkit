cmake_minimum_required(VERSION 3.16)

project(vkotehtava6-1_tallennaNimiTiedostoon LANGUAGES C)

add_executable(vkotehtava6-1_tallennaNimiTiedostoon main.c)

include(GNUInstallDirs)
install(TARGETS vkotehtava6-1_tallennaNimiTiedostoon
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
