cmake_minimum_required(VERSION 3.28)
project(GameSkeleton)

set(CMAKE_CXX_STANDARD 17)

add_executable(GameSkeleton main.cpp)

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR libs/SFML-2.6.1/lib/cmake/SFML)
find_package(SFML REQUIRED COMPONENTS system window graphics audio network)

include_directories(libs/SFML-2.6.1/include ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(GameSkeleton sfml-system sfml-window sfml-graphics sfml-audio sfml-network)
