cmake_minimum_required(VERSION 3.10)  # CMake version check
project(santaparavia CXX)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 11)            # Enable c++14 standard

set( headers paravia.h player.h typedefs.h )
set( source main.cpp paravia.cpp player.cpp )

add_executable(santaparavia ${source} ${headers})


