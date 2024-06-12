cmake_minimum_required(VERSION 3.28)
project(GameSkeleton)

set(CMAKE_CXX_STANDARD 17)

set(ROOT_DIR ${CMAKE_SOURCE_DIR})
set(GAME_SKELETON_DIR game_skeleton)
set(SFML_INCLUDE_DIR libs/SFML-2.6.1/include)
set(SFML_DIR ${ROOT_DIR}/libs/SFML-2.6.1/lib/cmake/SFML)

add_subdirectory(game_skeleton)

set(SOURCE_FILES main.cpp)
add_executable(GameSkeleton ${SOURCE_FILES})

include_directories(${GAME_SKELETON_DIR})
include_directories(${SFML_INCLUDE_DIR})

target_link_libraries(GameSkeleton game_skeleton)