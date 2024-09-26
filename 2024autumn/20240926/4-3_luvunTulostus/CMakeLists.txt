cmake_minimum_required(VERSION 3.16)

project(4-3_luvunTulostus LANGUAGES C)

add_executable(4-3_luvunTulostus main.c)

include(GNUInstallDirs)
install(TARGETS 4-3_luvunTulostus
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
