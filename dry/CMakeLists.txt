cmake_minimum_required(VERSION 3.10)

# Set the project name
project(DryProject)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include all .cpp files in the directory
file(GLOB SOURCES "*.cpp")

# Add the executable
add_executable(DryProject ${SOURCES})