cmake_minimum_required(VERSION 3.16)

project(GrossSalary LANGUAGES C)

add_executable(GrossSalary main.c)

include(GNUInstallDirs)
install(TARGETS GrossSalary
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
