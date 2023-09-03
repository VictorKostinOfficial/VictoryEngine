cmake_minimum_required(VERSION 3.0.0)
project(Sandbox LANGUAGES CXX)

file(GLOB_RECURSE Headers
  "*.h"
)
file(GLOB_RECURSE Sources
  "*.cpp"
)

link_libraries(Victory)
include_directories(../Victory/src)
add_executable(Sandbox src/Sandbox.cpp)