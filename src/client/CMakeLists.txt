cmake_minimum_required(VERSION 3.20)
project("r-type_client")

file(GLOB_RECURSE SOURCE src/*.cpp)
find_package(SFML 2.5
    COMPONENTS graphics audio window system
    REQUIRED
)
include_directories(${CMAKE_SOURCE_DIR}/lib/ECS2/include)

add_executable(${PROJECT_NAME} ${SOURCE})
target_link_libraries(${PROJECT_NAME} sfml-graphics sfml-audio sfml-system)
target_link_libraries(${PROJECT_NAME} ecs2 socketmanager)
