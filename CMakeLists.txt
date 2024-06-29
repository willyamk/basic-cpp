cmake_minimum_required(VERSION 3.28)
project(basic_cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(basic_cpp main.cpp
        function.h
        utils/handleUserChoice.cpp
        base/FizzBuzz.cpp
        base/Factorial.cpp
        base/PrimeNumber.cpp
        base/Palindrome.cpp)
