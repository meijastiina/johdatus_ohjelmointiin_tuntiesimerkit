cmake_minimum_required(VERSION 3.16)

project(weekdayArray LANGUAGES C)

add_executable(weekdayArray main.c)

include(GNUInstallDirs)
install(TARGETS weekdayArray
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
