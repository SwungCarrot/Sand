cmake_minimum_required(VERSION 4.0)
project(Sand)

set(CMAKE_CXX_STANDARD 20)
find_package(raylib 5.0 REQUIRED)

add_executable(Sand main.cpp
        Particle.cpp
        Particle.h
        DInt.h
        Box.cpp
        Box.h
)
target_link_libraries(Sand PRIVATE raylib)