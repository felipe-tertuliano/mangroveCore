#!/bin/bash
clear
cd ..
mkdir -p build
cd build
cmake ..
make
cd ..
./build/client
cd bin/
