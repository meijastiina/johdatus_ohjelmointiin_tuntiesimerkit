cmake_minimum_required(VERSION 3.16)

project(3-4_kertotaulu LANGUAGES C)

add_executable(3-4_kertotaulu main.c)

include(GNUInstallDirs)
install(TARGETS 3-4_kertotaulu
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
