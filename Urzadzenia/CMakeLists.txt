cmake_minimum_required(VERSION 2.8.9)
project (mtest)

set(CMAKE_BUILD_TYPE Debug)

# prevent for in-source building
set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)
set(CMAKE_DISABLE_SOURCE_CHANGES ON)
if ("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}")
message(SEND_ERROR "In-source builds are not allowed.")
endif ()

include_directories(${PROJECT_SOURCE_DIR}/include)

file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")

add_executable(${PROJECT_NAME} mtest.cpp ${SOURCES})