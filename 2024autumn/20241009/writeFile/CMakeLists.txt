cmake_minimum_required(VERSION 3.16)

project(writeFile LANGUAGES C)

add_executable(writeFile main.c)

include(GNUInstallDirs)
install(TARGETS writeFile
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
