cmake_minimum_required(VERSION 3.20)

project("ecs2")

include_directories(include)
file(GLOB_RECURSE SOURCE src/*.cpp)

add_library(${PROJECT_NAME} STATIC ${SOURCE})
