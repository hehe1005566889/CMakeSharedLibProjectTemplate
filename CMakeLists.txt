cmake_minimum_required(VERSION 3.5)

project(AniLibs LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# libraries

add_subdirectory(libs/HTTPRequest)

# ==


# your shared lib
add_subdirectory(AniCore)
# the exec app
add_subdirectory(AniTest)

# adding libs before
