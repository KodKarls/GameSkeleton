cmake_minimum_required(VERSION 3.28)
project(GameSkeleton)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(game_skeleton)

set(SOURCE_FILES main.cpp)
add_executable(GameSkeleton ${SOURCE_FILES})

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR libs/SFML-2.6.1/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(game_skeleton)
include_directories(libs/SFML-2.6.1/include)

target_link_libraries(GameSkeleton game_skeleton sfml-system sfml-window sfml-graphics sfml-audio sfml-network)
