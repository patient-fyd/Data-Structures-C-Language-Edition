#include "../include/list/seqqueue.h"


void init(sequnence_queue *sq) {
    sq->front = 0;
    sq->rear = 0;
}

int empty(sequnence_queue sq) {
    return sq.front == sq.rear ? 1 : 0;
}

void display(sequnence_queue sq) {
    if (empty(sq)) {
        printf("队列为空\n");
    } else {
        for (int i = sq.front; i < sq.rear; i++) {
            printf("%5d", sq.a[i]);
        }
    }
}

datatype get_front(sequnence_queue sq) {
    if (empty(sq)) {
        printf("队列为空,无法取值\n");
        return ERROR_VALUE;
    }
    return sq.a[sq.front];
}

int insert(sequnence_queue *sq, datatype x) {
    int i;
    if (sq->rear == MAXSIZE) {
        printf("队列已满，无法插入\n");
        return -1;
    }
    sq->a[sq->rear] = x;
    sq->rear++;
    return 0;
}

int dele(sequnence_queue *sq){
    if (empty(*sq)) {
        printf("队列为空，无法删除\n");
        return -1;
    }
    sq->front++;
    return 0;
}
