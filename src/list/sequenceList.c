#include "list/sequenceList.h"

void SequenceListInit(SequenceList* list) {
    list->size = 0;
}

int SequenceListAppend(SequenceList* list, ElementType element) {
    if (list->size == MAX_SIZE) {
        printf("顺序表已满,无法插入!\n");
        return -1;
    }
    list->array[list->size] = element;
    list->size++;
    return 0;
}

void SequenceListDisplay(SequenceList list) {
    if (list.size == 0) {
        printf("顺序表为空!\n");
    } else {
        for (int i = 0; i < list.size; i++) {
            printf("%5d", list.array[i]);
        }
        printf("\n");
    }
}

int SequenceListIsEmpty(SequenceList list) {
    return list.size == 0;
}

int SequenceListFind(SequenceList list, ElementType element) {
    for (int i = 0; i < list.size; i++) {
        if (list.array[i] == element) {
            return i;
        }
    }
    return -1;
}

ElementType SequenceListGet(SequenceList list, int index) {
    if (index < 0 || index >= list.size) {
        printf("要获取的结点不存在!\n");
        return ERROR_VALUE;
    }
    return list.array[index];
}

int SequenceListInsert(SequenceList* list, int position, ElementType element) {
    if (list->size == MAX_SIZE) {
        printf("顺序表已满,无法插入!\n");
        return -1;
    }
    if (position < 0 || position > list->size) {
        printf("要插入的位置不存在!\n");
        return -1;
    }
    for (int i = list->size; i > position; i--) {
        list->array[i] = list->array[i - 1];
    }
    list->array[position] = element;
    list->size++;
    return 0;
}

int SequenceListDelete(SequenceList* list, int position) {
    if (list->size == 0) {
        printf("顺序表为空,无法删除!\n");
        return -1;
    }
    if (position < 0 || position >= list->size) {
        printf("要删除的位置不存在!\n");
        return -1;
    }
    for (int i = position; i < list->size - 1; i++) {
        list->array[i] = list->array[i + 1];
    }
    list->size--;
    return 0;
}