#include "list/sequlist.h"

void init(sequence_list *slt) {
    slt->size = 0;
}

int append(sequence_list *slt, datatype x) {
    if (slt->size == MAXSIZE) {
        printf("顺序表是满的！\n");
        return -1;
    }
    slt->a[slt->size] = x;
    slt->size += 1;
    return 0;
}

void display(sequence_list slt) {
    int i;
    if (!slt.size) {
        printf("顺序表是空的！\n");
    } else {
        for (i = 0; i < slt.size; i++) {
            printf("%5d", slt.a[i]);
        }
    }
}

int empty(sequence_list slt) {
    return slt.size == 0 ? 1 : 0;
}

int find(sequence_list slt, datatype x) {
    int i = 0;
    for (i = 0; i < slt.size; i++) {
        if (slt.a[i] == x) {
            return i;
        }
    }
    return -1;
}

datatype get(sequence_list slt, int i) {
    if (i < 0 || i >= slt.size) {
        printf("要获取的结点不存在！\n");
        return ERROR_VALUE;
    } else {
        return slt.a[i];
    }
}

int insert(sequence_list *slt, int position, datatype x) {
    int i;
    if (slt->size == MAXSIZE) {
        printf("顺序表是满的！无法插入\n");
        return -1;
    }
    if (position < 0 || position > slt->size) {
        printf("要插入的位置不存在！\n");
        return -1;
    }
    for (i = slt->size; i > position; i--) {
        slt->a[i] = slt->a[i - 1];
    }
    slt->a[position] = x;
    slt->size++;
    return 0;
}

int delete(sequence_list *slt, int position) {
    int i;
    if (slt->size == 0) {
        printf("顺序表是空的！无法删除\n");
        return -1;
    }
    if (position < 0 || position >= slt->size) {
        printf("要删除的位置不存在！\n");
        return -1;
    }
    for (i = position; i < slt->size - 1; i++) {
        slt->a[i] = slt->a[i + 1];
    }
    slt->size--;
    return 0;
}
