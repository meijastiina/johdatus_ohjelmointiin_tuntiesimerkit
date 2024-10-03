cmake_minimum_required(VERSION 3.16)

project(struct LANGUAGES C)

add_executable(struct main.c)

include(GNUInstallDirs)
install(TARGETS struct
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
