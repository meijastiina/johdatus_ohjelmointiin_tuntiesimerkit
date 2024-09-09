cmake_minimum_required(VERSION 3.16)

project(numberArray LANGUAGES C)

add_executable(numberArray main.c)

include(GNUInstallDirs)
install(TARGETS numberArray
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
