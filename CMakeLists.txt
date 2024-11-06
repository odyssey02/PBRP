# Minimum CMake version required and project details
cmake_minimum_required(VERSION 3.0)
project(
	PBRP
	VERSION 1.0
	DESCRIPTION "Pro Baseball Relay Project"
	LANGUAGES CXX
)

find_package(CURL REQUIRED)

# Set the C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)



add_subdirectory(src)
add_subdirectory(tests)