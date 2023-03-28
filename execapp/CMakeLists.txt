cmake_minimum_required(VERSION 3.20)

# project name
project(execapp)

# for auto searching soruces
file(GLOB src "src/*.h" "src/*.hpp" "src/*.cpp" "src/*.cpp")
message(${src})
add_executable(execapp
    ${src}
)

# for adding projects
add_dependencies(execapp
    sharedlib
)

# for adding include directories
target_include_directories(execapp PRIVATE
    ${CMAKE_SOURCE_DIR}/sharedlib/src
    # for more
)

# for link libraries
target_link_libraries(execapp PRIVATE
    sharedlib
)
