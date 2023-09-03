cmake_minimum_required(VERSION 3.0.0)
project(VictoryEngine)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ../../bin/${CMAKE_BUILD_TYPE}_${CMAKE_HOST_SYSTEM_NAME}/libs)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ../../bin/${CMAKE_BUILD_TYPE}_${CMAKE_HOST_SYSTEM_NAME}/libs)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../../bin/${CMAKE_BUILD_TYPE}_${CMAKE_HOST_SYSTEM_NAME}/)

add_subdirectory(Sandbox)
add_subdirectory(Victory)