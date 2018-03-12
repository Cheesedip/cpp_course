cmake_minimum_required(VERSION 3.1)

project( Lecture_3)

set(CMAKE_BUILD_TYPE Debug)

set (CMAKE_CXX_STANDARD 11)

include_directories(
  /usr/local/include
  ${CMAKE_SOURCE_DIR}/include
)

add_executable(main
  src/main.cpp
  )


