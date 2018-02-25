cmake_minimum_required(VERSION 3.4 FATAL_ERROR)
project(lib)

# Set required Qt variables
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

# Find required libraries
find_package(Qt5Network)

# Define our sources and headers
aux_source_directory(${PROJECT_SOURCE_DIR}/src SOURCES)
file(GLOB HEADERS ${PROJECT_SOURCE_DIR}/include/*.h)

# Define our target
add_library(${PROJECT_NAME} SHARED ${SOURCES} ${HEADERS})

# Link necessary libraries
target_link_libraries(${PROJECT_NAME} Qt5::Network)
