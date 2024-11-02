cmake_minimum_required(VERSION 3.26.0)
project(HTMLServer VERSION 0.1.0 LANGUAGES CXX)

add_executable(${PROJECT_NAME} src/main.cpp)

# this is to pass the information to C++ intellisense, so that C++ extension can be used in VS Code
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)