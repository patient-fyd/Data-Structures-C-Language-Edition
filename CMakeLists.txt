cmake_minimum_required(VERSION 3.27)
project(Data_Structures_C_Language_Edition C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_executable(Data_Structures_C_Language_Edition
        include/linear_tables/sequential_storage/sequenceList.h
        src/linear_tables/sequential_storage/sequenceList.c
        src/testDemo/sequenceList_test.c
        src/main.c
        include/linear_tables/sequential_storage/sequenceStack.h
        src/linear_tables/sequential_storage/sequenceStack.c
        include/linear_tables/sequential_storage/sequenceQueue.h
        src/linear_tables/sequential_storage/sequenceQueue.c
        include/linear_tables/linked_storage/singleLinkedList.h
        src/linear_tables/linked_storage/singleLinkedList.c
        include/linear_tables/linked_storage/headNodeSingleLinkedList.h
        src/linear_tables/linked_storage/headNodeSingleLinkedList.c
        src/testDemo/headNodeSingleLinkedList_test.c
        src/testDemo/sequenceStack_test.c
)
