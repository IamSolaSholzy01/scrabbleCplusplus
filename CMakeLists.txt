cmake_minimum_required(VERSION 3.23)
project(scrabble_demo)

set(CMAKE_CXX_STANDARD 23)

add_executable(scrabble_demo src/main.cpp src/Objects/Tile/Tile.cpp src/Objects/Tile/Tile.h src/Objects/Bag/Bag.cpp src/Objects/Bag/Bag.h src/Objects/Rack/Rack.cpp src/Objects/Rack/Rack.h)
