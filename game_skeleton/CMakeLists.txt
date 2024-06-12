set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR libs/SFML-2.6.1/lib/cmake/SFML)

find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(libs/SFML-2.6.1/include)

add_library(game_skeleton
            function_test_file.cpp
            Game.cpp
            TimeStep.cpp
            Window.cpp)

target_link_libraries(game_skeleton sfml-system sfml-window sfml-graphics sfml-audio sfml-network)
