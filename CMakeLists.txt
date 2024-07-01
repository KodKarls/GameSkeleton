cmake_minimum_required(VERSION 3.28)
project(GameSkeleton)

set(CMAKE_CXX_STANDARD 17)

set(ROOT_DIR ${CMAKE_SOURCE_DIR})
set(GAME_SKELETON_DIR game_skeleton)
set(GAME_SKELETON_LIB game_skeleton)
set(SFML_INCLUDE_DIR libs/SFML-2.6.1/include)
set(SFML_DIR ${ROOT_DIR}/libs/SFML-2.6.1/lib/cmake/SFML)
set(TESTS_DIR ${ROOT_DIR}/tests)
set(TESTS_LIBS_DIR ${TESTS_DIR}/libs)

add_subdirectory(${GAME_SKELETON_DIR})
add_subdirectory(${TESTS_DIR})

set(SOURCE_FILES main.cpp)
add_executable(GameSkeleton ${SOURCE_FILES})

include_directories(${GAME_SKELETON_DIR})
include_directories(${SFML_INCLUDE_DIR})
include_directories(${TESTS_DIR})

target_link_libraries(GameSkeleton ${GAME_SKELETON_LIB})