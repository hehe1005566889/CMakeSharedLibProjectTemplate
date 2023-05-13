cmake_minimum_required(VERSION 3.20)

# project name
project(AniCore)

# for auto searching soruces
file(GLOB_RECURSE src "src/*.h" "src/*.hpp" "src/*.cpp" "src/*.cpp")
message(${src})
add_library(AniCore SHARED
    ${src}
)

add_dependencies(AniCore HTTPRequest)

# for adding include directories
target_include_directories(AniCore PRIVATE
    ${CMAKE_SOURCE_DIR}/AniCore/src
    ${CMAKE_SOURCE_DIR}/libs/HTTPRequest/include
    # for more
)

# for link libraries
target_link_libraries(AniCore PRIVATE
    HTTPRequest    
    # lib name
)

