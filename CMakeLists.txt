cmake_minimum_required(VERSION 3.2.1)
project(sample)

enable_language(C CXX)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
SET(CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG")
SET(CMAKE_CXX_FLAGS_DEBUG "-g -O0")

message(STATUS "Building with the following extra flags: ${CMAKE_CXX_FLAGS}")

include_directories(
    ${PROJECT_SOURCE_DIR}/src
    ${PROJECT_SOURCE_DIR}/include
)

file(GLOB SOURCES "src/*.cpp")

add_library( lib ${SOURCES} )

add_executable(${PROJECT_NAME} app/main.cpp)
add_dependencies(${PROJECT_NAME} lib)      
target_link_libraries(${PROJECT_NAME} lib)