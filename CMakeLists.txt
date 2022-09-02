cmake_minimum_required(VERSION 3.23)
project(scrabble_demo)

set(CMAKE_CXX_STANDARD 23)

add_executable(scrabble_demo main.cpp Tile.cpp Tile.h)
