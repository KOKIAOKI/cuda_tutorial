cmake_minimum_required(VERSION 2.8)
project(test)

find_package(CUDA REQUIRED)

CUDA_ADD_EXECUTABLE(test src/main.cu)

add_executable(std_test
  src/test.cpp
 )