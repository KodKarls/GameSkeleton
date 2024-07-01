include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runGameSkeletonTests
               main.cpp
               test_window.cpp
               test_game.cpp)

target_link_libraries(runGameSkeletonTests gtest gtest_main)
target_link_libraries(runGameSkeletonTests game_skeleton)