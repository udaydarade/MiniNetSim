cmake_minimum_required(VERSION 3.10)
project(ShapeCanvas)

set(CMAKE_CXX_STANDARD 17)

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

include_directories(include)

file(GLOB SOURCES
    src/*.cpp
    main.cpp
)

add_executable(ShapeCanvas ${SOURCES})
target_link_libraries(ShapeCanvas sfml-graphics sfml-window sfml-system)
