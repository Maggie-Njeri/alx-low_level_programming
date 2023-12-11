#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Maggie-Njeri/alx-low_level_programming/master/0x18-dynamic_libraries/libsec.so
export LD_PRELOAD="$PWD/../libsec.so"
