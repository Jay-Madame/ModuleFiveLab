cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

# Set C++11 standard
add_definitions(-std=c++11)

# Project name
project(ProblemOne)

# Add the executable
add_executable(ProblemOne main.cpp Picture.cpp Color.cpp)