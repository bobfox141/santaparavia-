cmake_minimum_required(VERSION 3.10)  # CMake version check
project(santaparavia CXX)             # Create project "santaparavia"
set(CMAKE_CXX_STANDARD 11)            # Enable c++11 standard
set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
set(QT_QMAKE_EXECUTABLE "/usr/lib/qt5/qmake")
set(CMAKE_BUILD_TYPE "Debug")

set( headers
    src/paravia.h
    src/player.h
    src/typedefs.h
    src/ncurses-screen.h
    )

set( source
    src/main.cpp
    src/paravia.cpp
    src/player.cpp
    src/ncurses-screen.cpp
    )

add_executable(santaparavia ${source} ${headers})


