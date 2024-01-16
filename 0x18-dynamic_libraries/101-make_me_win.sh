#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Kisotu/alx-low_level_programming/main/0x18-dynamic_libraries/jacpothack.so
export LD_PRELOAD="$PWD/../jacpothack.so"
