/**
 * @file sequenceQueue.h
 * @author G3327555
 * @brief 队列的顺序存储实现
 * @version 1.0
 * @date 2023-05-06
 *
 * @copyright Copyright (c) 2023
 *
 * 该文件实现了队列的抽象数据类型(ADT)
 * ADT: SequenceQueue{SequenceQueueInit, SequenceQueueIsEmpty, SequenceQueueDisplay, SequenceQueueGetFront, SequenceQueueInsert, SequenceQueueDelete, SequenceCircularQueueInsert, SequenceCircularQueueDelete}
 */

#ifndef SEQUENCEQUEUE_H
#define SEQUENCEQUEUE_H

#include <stdio.h>

#define MAX_SIZE 100  /**< 队列的最大长度 */
#define ERROR_VALUE (-99999)  /**< 错误值 */

/**
 * @brief 定义元素类型
 */
typedef int ElementType;

/**
 * @brief 顺序队列结构体
 */
typedef struct {
    ElementType array[MAX_SIZE];  /**< 存储元素的数组 */
    int front;  /**< 队头指针 */
    int rear;  /**< 队尾指针 */
} SequenceQueue;

/* 函数声明 */

/**
 * @brief 初始化队列
 * @param queue 指向SequenceQueue的指针
 */
void SequenceQueueInit(SequenceQueue* queue);

/**
 * @brief 判断队列是否为空
 * @param queue SequenceQueue结构体
 * @return 1表示队列为空, 0表示队列不为空
 */
int SequenceQueueIsEmpty(SequenceQueue queue);

/**
 * @brief 打印队列中的所有元素
 * @param queue SequenceQueue结构体
 */
void SequenceQueueDisplay(SequenceQueue queue);

/**
 * @brief 获取队列的队首元素
 * @param queue SequenceQueue结构体
 * @return 队首元素的值
 */
ElementType SequenceQueueGetFront(SequenceQueue queue);

/**
 * @brief 元素入队
 * @param queue 指向SequenceQueue的指针
 * @param element 待入队的元素
 * @return 0表示入队成功, -1表示入队失败
 */
int SequenceQueueInsert(SequenceQueue* queue, ElementType element);

/**
 * @brief 元素出队
 * @param queue 指向SequenceQueue的指针
 * @return 0表示出队成功, -1表示出队失败
 */
int SequenceQueueDelete(SequenceQueue* queue);

#endif /* SEQUENCEQUEUE_H */