cmake_minimum_required(VERSION 3.5)

project(CMakeTemplate LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# your shared lib
add_subdirectory(sharedlib)
# the exec app
add_subdirectory(execapp)

# adding libs before
