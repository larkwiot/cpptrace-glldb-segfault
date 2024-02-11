cmake_minimum_required(VERSION 3.20 FATAL_ERROR)

project(CPPTRACE-SEGFAULT VERSION 0.1 LANGUAGES C CXX)

add_executable(segfault
        src/test.cpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set_target_properties(segfault PROPERTIES CXX_STANDARD 20)

include(cmake/CPM.cmake)

CPMAddPackage(NAME cpptrace GITHUB_REPOSITORY jeremy-rifkin/cpptrace VERSION 0.3.1)
target_link_libraries(segfault cpptrace::cpptrace)

CPMAddPackage(NAME catch GITHUB_REPOSITORY catchorg/catch2 VERSION 3.5.2)
target_link_libraries(segfault Catch2::Catch2WithMain)
