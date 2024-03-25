cmake_minimum_required(VERSION 3.27)
project(Design_patterns_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(Singleton/Non-thread-safe)

add_executable(Design_patterns_cpp
        Singleton/Non-thread-safe/Singleton.cpp
        Singleton/Non-thread-safe/Singleton.h
        main.cpp)
