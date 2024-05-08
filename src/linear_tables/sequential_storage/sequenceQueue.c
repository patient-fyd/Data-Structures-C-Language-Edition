#include "linear_tables/sequential_storage/sequenceQueue.h"


void SequenceQueueInit(SequenceQueue* queue) {
    queue->front = 0;
    queue->rear = 0;
}

int SequenceQueueIsEmpty(SequenceQueue queue) {
    return queue.front == queue.rear;
}

void SequenceQueueDisplay(SequenceQueue queue) {
    if (SequenceQueueIsEmpty(queue)) {
        printf("队列为空\n");
    } else {
        int i = queue.front;
        while (i != queue.rear) {
            printf("%5d", queue.array[i]);
            i = (i + 1) % MAX_SIZE;
        }
        printf("\n");
    }
}

ElementType SequenceQueueGetFront(SequenceQueue queue) {
    if (SequenceQueueIsEmpty(queue)) {
        printf("队列为空,无法取值\n");
        return ERROR_VALUE;
    }
    return queue.array[queue.front];
}

int SequenceQueueInsert(SequenceQueue* queue, ElementType element) {
    if ((queue->rear + 1) % MAX_SIZE == queue->front) {
        printf("队列已满,无法插入\n");
        return -1;
    }
    queue->array[queue->rear] = element;
    queue->rear = (queue->rear + 1) % MAX_SIZE;
    return 0;
}

int SequenceQueueDelete(SequenceQueue* queue) {
    if (SequenceQueueIsEmpty(*queue)) {
        printf("队列为空,无法删除\n");
        return -1;
    }
    queue->front = (queue->front + 1) % MAX_SIZE;
    return 0;
}