cmake_minimum_required(VERSION 2.8.3)
project(Base_Derived)
#
#SET(CMAKE_C_COMPILER arm-openwrt-linux-gcc)
#SET(CMAKE_CXX_COMPILER arm-openwrt-linux-g++)

SET(CMAKE_BUILD_TYPE Debug)

SET( CMAKE_CXX_FLAGS "-std=c++11 -g")
MESSAGE(STATUS ${CMAKE_PREFIX_PATH})

#set(OpenCV_DIR /opt/ros/kinetic/include/opencv-3.3.1-dev)
#find_package(OpenCV 3.3.1 REQUIRED)
#include_directories(/opt/ros/kinetic/include/opencv-3.3.1-dev/opencv)
include_directories( ${PROJECT_SOURCE_DIR}/include )
include_directories("/usr/include/eigen3")

add_executable( Base_Derived 
src/map_grid_cost_function.cpp
src/obstacle_cost_function.cpp
src/oscillation_cost_function.cpp
src/twirling_cost_function.cpp
src/test.cpp )