cmake_minimum_required(VERSION 3.27)
project(game)

set(CMAKE_CXX_STANDARD 17)

add_executable(game main.cpp
        main.cpp
        main.cpp
        )
set(SFML_STATIC_LIBRARIES_TRUE)
set(SFML_DIR /home/edgar/SFML/lib/cmake/sfml)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)
include_directories(/home/edgar/game/SFML/include/SFML)
target_link_libraries(game sfml-system sfml-graphics)
