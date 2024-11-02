#!/bin/bash

# Exit script on any error
set -e

# Create and navigate to the build directory
mkdir -p build
cd build

# Run CMake configuration
cmake ..

# Build the project
cmake --build .

# Execute HTML Server
./HTMLServer

# cmake -S standalone -B build/standalone
# cmake --build build/standalone
# ./build/standalone/HTMLserver --help