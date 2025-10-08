cmake_minimum_required(VERSION 3.16)

project(vkotehtava6-1_tallennaNimiTiedostoon2 LANGUAGES C)

add_executable(vkotehtava6-1_tallennaNimiTiedostoon2 main.c)

include(GNUInstallDirs)
install(TARGETS vkotehtava6-1_tallennaNimiTiedostoon2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
