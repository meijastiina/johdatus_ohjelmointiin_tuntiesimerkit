cmake_minimum_required(VERSION 3.16)

project(firstFor LANGUAGES C)

add_executable(firstFor main.c)

include(GNUInstallDirs)
install(TARGETS firstFor
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
