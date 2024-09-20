cmake_minimum_required(VERSION 3.16)

project(nestedLoop LANGUAGES C)

add_executable(nestedLoop main.c)

include(GNUInstallDirs)
install(TARGETS nestedLoop
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
