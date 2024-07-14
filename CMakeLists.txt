cmake_minimum_required(VERSION 3.10)
project(VirtualFileSystem)

set(CMAKE_CXX_STANDARD 17)

set(MY_COMPILE_FLAGS "-Wall -Wextra -Wpedantic -Werror")
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} ${MY_COMPILE_FLAGS})

set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)

include_directories(${INCLUDE_DIR})

add_executable(vf_system ${SRC_DIR}/main.cpp ${SRC_DIR}/memory.cpp ${SRC_DIR}/file.cpp ${SRC_DIR}/dir.cpp)
