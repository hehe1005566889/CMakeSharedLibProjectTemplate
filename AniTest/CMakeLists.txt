cmake_minimum_required(VERSION 3.20)

# project name
project(AniTest)

# for auto searching soruces
file(GLOB_RECURSE src "src/*.h" "src/*.hpp" "src/*.cpp" "src/*.cpp")
message(${src})
add_executable(AniTest
    ${src}
)

# for adding projects
add_dependencies(AniTest
    AniCore
)

# for adding include directories
target_include_directories(AniTest PRIVATE
    ${CMAKE_SOURCE_DIR}/AniCore/src
    # for more
)

# for link libraries
target_link_libraries(AniTest PRIVATE
    AniCore
)
