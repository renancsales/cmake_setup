cmake_minimum_required(VERSION "3.19.2")

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug")
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Release>:Release")

# adding external
# add_subdirectory("externals/fem_lib/")

project(project_setup)
set(CMAKE_CXX_STANDARD 20)

# define MY_SOURCES to be a list if all source files for my project
file(GLOB_RECURSE MY_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_executable(project_setup "${MY_SOURCES}")

target_compile_definitions("${CMAKE_PROJECT_NAME}" PUBLIC RESOURCES_PATH="${CMAKE_CURRENT_SOURCE_DIR}/")
#target_compile_definitions("${CMAKE_PROJECT_NAME}" PUBLIC RESOURCES_PATH="./")


target_include_directories(project_setup PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include/")
# target_link_libraries(project_setup PRIVATE fem_lib)