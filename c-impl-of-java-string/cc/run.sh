#! /bin/bash

if [ ! -d "build" ]; then
    echo "Build directory does not exist. Creating..."
    mkdir build
fi

cd build

echo "Building makefiles..."

cmake ..

echo "Running make..."

make

echo "Running the program..."

./main

cd ..

