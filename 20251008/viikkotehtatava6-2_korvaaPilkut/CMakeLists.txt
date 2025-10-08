cmake_minimum_required(VERSION 3.16)

project(viikkotehtatava6-2_korvaaPilkut LANGUAGES C)

add_executable(viikkotehtatava6-2_korvaaPilkut main.c)

include(GNUInstallDirs)
install(TARGETS viikkotehtatava6-2_korvaaPilkut
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
