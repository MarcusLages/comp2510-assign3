cmake_minimum_required(VERSION 3.29)
project(COMP2510_assign3 C)

set(CMAKE_C_STANDARD 99)

add_executable(COMP2510_assign3 a3.c
        a3.h
        test-patients.c
        patient-list.c)
