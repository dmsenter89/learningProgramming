project(ptree)
cmake_minimum_required(VERSION 3.5)
find_package(Boost 1.5.0)
include_directories(${BOOST_INCLUDE_DIRS})
add_definitions(-std=c++11)

add_executable(ptree ptree.cpp)


