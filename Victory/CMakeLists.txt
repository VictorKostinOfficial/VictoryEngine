cmake_minimum_required(VERSION 3.0.0)
project(Victory LANGUAGES CXX)

file(GLOB_RECURSE Headers
  "src/*.h"
)
file(GLOB_RECURSE Sources
  "src/*.cpp"
)

include_directories(src)
include_directories(external/spdlog/include)

add_library(Victory STATIC ${Headers} ${Sources})