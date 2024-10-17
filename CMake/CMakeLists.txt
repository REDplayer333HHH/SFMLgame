cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 17)
project(test)

# add source files
add_executable(test ${PROJECT_SOURCE_DIR}/../src/main.cpp)

# add headers
    # personal
target_include_directories(test PRIVATE ${PROJECT_SOURCE_DIR}/../include)
    # SFML
target_include_directories(test PRIVATE ${PROJECT_SOURCE_DIR}/../SFML/include)

# link libraries
    # SFML
target_link_libraries(test 
    ${PROJECT_SOURCE_DIR}/../SFML/lib/libsfml-graphics.so
    ${PROJECT_SOURCE_DIR}/../SFML/lib/libsfml-window.so
    ${PROJECT_SOURCE_DIR}/../SFML/lib/libsfml-system.so
)
