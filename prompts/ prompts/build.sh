#!/bin/bash
mkdir -p build
cd build
cmake ..
make
./runTests
gcovr -r .. --html --html-details -o ../coverage.html
