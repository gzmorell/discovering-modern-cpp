#!/bin/sh
if ["$1" == "clean" ]; then
   rm -rf CMakeCache.txt CMakeFiles Makefile cmake_install.cmake compile_commands.json initializer
   exit 0
fi
make && ./initializer
