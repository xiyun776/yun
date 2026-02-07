#!/bin/bash
cd ./build
rm -rf *
cmake -DCMAKE_PREFIX_PATH=/usr/lib/x86_64-linux-gnu/cmake/Qt6 ..
make -j$(nproc)
./car
cd ..
