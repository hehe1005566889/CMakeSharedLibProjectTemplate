cmake_minimum_required(VERSION 3.20)

# project name
project(sharedlib)

# for auto searching soruces
file(GLOB src "src/*.h" "src/*.hpp" "src/*.cpp" "src/*.cpp")
message(${src})
add_library(sharedlib SHARED
    ${src}
)

# for adding projects
# add_dependencies(sharedlib PRIVATE projectname)

# for adding include directories
target_include_directories(sharedlib PRIVATE
    ${CMAKE_SOURCE_DIR}/sharedlib/src
    # for more
)

# for link libraries
# target_link_libraries(sharedlib PRIVATE
#    # lib name
# )

