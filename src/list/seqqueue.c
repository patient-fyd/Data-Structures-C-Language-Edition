#include "../include/list/seqqueue.h"


void init(sequnence_queue *sq){
    sq->front = 0;
    sq->rear = 0;
}

int empty(sequnence_queue sq){
    return sq.front == sq.rear ? 1 : 0;
}

void display(sequnence_queue sq){
    if(empty(sq)){
        printf("队列为空\n");
    }else{
        for(int i = sq.front; i < sq.rear; i++){
            printf("%5d", sq.a[i]);
        }
    }
}

datatype get_front(sequnence_queue sq){
    if(empty(sq)){
        printf("队列为空,无法取值\n");
        return ERROR_VALUE;
    }
    return sq.a[sq.front];
}

