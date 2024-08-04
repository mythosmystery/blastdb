cmake_minimum_required(VERSION 3.10)
project(BlastDB VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the library subdirectory
add_subdirectory(libblast)

# Add the application subdirectory
add_subdirectory(blastcli)
