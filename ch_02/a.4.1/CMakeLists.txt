cmake_minimum_required(VERSION 3.6)
set(CMAKE_CXX_COMPILER /usr/bin/g++)
project(pointer_to_member VERSION 1.0
              DESCRIPTION "Pointer to class members"
              LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE Release)
set(SRC_LIST main.cpp)
set(HDR_LIST)
add_executable(${PROJECT_NAME} ${SRC_LIST} ${HDR_LIST})
