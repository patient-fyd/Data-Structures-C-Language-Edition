cmake_minimum_required(VERSION 3.27)
project(Data_Structures_C_Language_Edition C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_executable(Data_Structures_C_Language_Edition
        include/list/sequenceList.h
        src/list/sequenceList.c
        src/testDemo/sequenceList_test.c
        src/main.c
        include/list/sequenceStack.h
        src/list/sequenceStack.c
        include/list/sequenceQueue.h
        src/list/sequenceQueue.c
        include/list/singleLinkedList.h
        src/list/singleLinkedList.c
        include/list/hlnklist.h
        src/list/hlnklist.c
        src/testDemo/hlnklist_test.c
        src/testDemo/sequenceStack_test.c
)
