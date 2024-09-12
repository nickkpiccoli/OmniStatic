cmake_minimum_required(VERSION 3.12)
project(OmniStatic)

set(CMAKE_CXX_STANDARD 20)

include_directories(${CMAKE_SOURCE_DIR}/include)

set(SOURCES
    src/main.cpp
    src/banner.cpp
    src/menu.cpp
    src/exeAnalysis.cpp
    src/exeTools.cpp
    src/utils.cpp
    src/pdfAnalysis.cpp
    src/pdfTools.cpp
)

add_executable(omnistatic ${SOURCES})

set(CMAKE_CXX_COMPILER "clang++")
