cmake_minimum_required(VERSION 3.5)

set(CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(bowling)

enable_testing()

add_subdirectory(main)
add_subdirectory(test)
add_subdirectory(libbowling)
