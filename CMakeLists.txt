cmake_minimum_required(VERSION 3.4 FATAL_ERROR)
project(QRest)

# Define some Qt required variables
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

# Declare and build our external dependencies
add_subdirectory(external/googletest)

# Let's discover our dependencies.
find_package(Qt5Core)

# Add our subprojects.
add_subdirectory(lib)

add_executable(${PROJECT_NAME} "main.cpp")

target_link_libraries(${PROJECT_NAME} Qt5::Core)
