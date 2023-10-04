cmake_minimum_required(VERSION 3.20)
project("r-type_server")

file(GLOB_RECURSE SOURCE src/*.cpp)

include_directories(
    ${CMAKE_SOURCE_DIR}/lib/ECS2/include
    ${CMAKE_SOURCE_DIR}/lib/SocketManager/include
)

add_executable(${PROJECT_NAME} ${SOURCE})
target_link_libraries(${PROJECT_NAME} ecs2 socketmanager)
