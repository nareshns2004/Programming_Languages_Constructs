cmake_minimum_required(VERSION 3.28.3)

if(CMAKE_SOURCE_DIR STREQUAL CMAKE_BINARY_DIR)
    message(FATAL_ERROR "make a different build directory in the project and use cmake.. in build directory")
endif()

project(cfs_schedular)

set(CMAKE_CXX_STANDARD, 14)
set(CMAKE_CXX_STANDARD_REQUIRED)
add_compile_options(-Wall -Wextra)

file(GLOB SOURCES 
    "src/*.cpp"
    "main.cpp"
)

add_executable(cfs_scheduler ${SOURCES})
target_include_directories(cfs_scheduler PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)