cmake_minimum_required(VERSION 3.16)

project(luvunTulostus LANGUAGES C)

add_executable(luvunTulostus main.c)

include(GNUInstallDirs)
install(TARGETS luvunTulostus
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
