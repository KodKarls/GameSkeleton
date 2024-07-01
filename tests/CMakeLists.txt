project(tests)

include_directories(${GAME_SKELETON_DIR})

add_subdirectory(${TESTS_LIBS_DIR}/googletest)
add_subdirectory(game_skeleton_tests)