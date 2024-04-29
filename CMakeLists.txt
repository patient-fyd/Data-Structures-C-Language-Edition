cmake_minimum_required(VERSION 3.27)
project(Data_Structures_C_Language_Edition C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_executable(Data_Structures_C_Language_Edition
        include/list/sequlist.h
        src/list/sequlist.c
        src/testDemo/seqlist_test.c
        src/main.c)
