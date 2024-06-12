set(SFML_STATIC_LIBRARIES TRUE)
find_package(SFML REQUIRED COMPONENTS system window graphics audio network)

add_library(game_skeleton
            function_test_file.cpp)

include_directories(${ROOT_DIR}/${SFML_INCLUDE_DIR})

target_link_libraries(game_skeleton sfml-system sfml-window sfml-graphics sfml-audio sfml-network)