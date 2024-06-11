cmake_minimum_required(VERSION 3.28)
project(GameSkeleton)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(game_skeleton)

set(SOURCE_FILES main.cpp)
add_executable(GameSkeleton ${SOURCE_FILES})

include_directories(game_skeleton)

target_link_libraries(GameSkeleton game_skeleton)
