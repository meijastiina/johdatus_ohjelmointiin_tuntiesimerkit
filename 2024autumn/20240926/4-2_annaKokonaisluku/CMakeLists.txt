cmake_minimum_required(VERSION 3.16)

project(4-2_annaKokonaisluku LANGUAGES C)

add_executable(4-2_annaKokonaisluku main.c)

include(GNUInstallDirs)
install(TARGETS 4-2_annaKokonaisluku
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
