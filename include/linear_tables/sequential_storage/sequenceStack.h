/**
 * @file seqstack.h
 * @author G3327555
 * @brief 栈的顺序存储实现
 * @version 1.0
 * @date 2023-05-06
 *
 * @copyright Copyright (c) 2023
 *
 * 该文件实现了栈的抽象数据类型(ADT)
 * ADT: SequenceStack{SequenceStackInit, SequenceStackIsEmpty, SequenceStackRead, SequenceStackPush, SequenceStackPop}
 */

#ifndef SEQUENCESTACK_H
#define SEQUENCESTACK_H

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100  /**< 栈的最大长度 */
#define ERROR_VALUE (-99999)  /**< 错误值 */

/**
 * @brief 定义元素类型
 */
typedef int ElementType;

/**
 * @brief 顺序栈结构体
 */
typedef struct {
    ElementType array[MAX_SIZE];  /**< 存储元素的数组 */
    int top;  /**< 栈顶指针 */
} SequenceStack;

/* 函数声明 */

/**
 * @brief 初始化栈
 * @param stack 指向SequenceStack的指针
 */
void SequenceStackInit(SequenceStack* stack);

/**
 * @brief 判断栈是否为空
 * @param stack SequenceStack结构体
 * @return 1表示栈为空, 0表示栈不为空
 */
int SequenceStackIsEmpty(SequenceStack stack);

/**
 * @brief 读取栈顶元素
 * @param stack SequenceStack结构体
 * @return 栈顶元素的值
 */
ElementType SequenceStackRead(SequenceStack stack);

/**
 * @brief 元素入栈
 * @param stack 指向SequenceStack的指针
 * @param element 待入栈的元素
 * @return 0表示入栈成功, -1表示入栈失败
 */
int SequenceStackPush(SequenceStack* stack, ElementType element);

/**
 * @brief 元素出栈
 * @param stack 指向SequenceStack的指针
 * @return 0表示出栈成功, -1表示出栈失败
 */
int SequenceStackPop(SequenceStack* stack);

/**
 * @brief 测试顺序栈
 */
void SequenceStackTest();

#endif /* SEQUENCESTACK_H */