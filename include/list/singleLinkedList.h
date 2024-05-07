/**
 * @file slnklist.h
 * @author G3327555
 * @brief 单链表的实现
 * @version 1.0
 * @date 2023-05-07
 *
 * @copyright Copyright (c) 2023
 *
 * 该文件实现了单链表的抽象数据类型(ADT)
 * ADT: SingleLinkedList{SingleLinkedListInit, SingleLinkedListDisplay, SingleLinkedListFind, SingleLinkedListInsert, SingleLinkedListDelete}
 */

#ifndef SINGLELINKEDLIST
#define SINGLELINKEDLIST

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief 定义元素类型
 */
typedef int ElementType;

/**
 * @brief 单链表结点结构体
 */
typedef struct LinkNode {
    ElementType data;  /**< 结点数据域 */
    struct LinkNode* next;  /**< 指向下一个结点的指针 */
} Node;

/* 函数声明 */

/**
 * @brief 初始化一个空的单链表
 * @return 指向头结点的指针
 */
Node* SingleLinkedListInit();

/**
 * @brief 输出单链表中所有结点的值
 * @param head 指向头结点的指针
 */
void SingleLinkedListDisplay(Node* head);

/**
 * @brief 查找单链表中第 i 个结点
 * @param head 指向头结点的指针
 * @param i 要查找的结点位置
 * @return 指向第 i 个结点的指针,如果不存在返回 NULL
 */
Node* SingleLinkedListFind(Node* head, int i);

/**
 * @brief 在单链表第 i 个结点后插入一个新结点
 * @param head 指向头结点的指针
 * @param i 要插入的位置
 * @param element 新结点的值
 * @return 指向新插入的结点的指针,如果插入失败返回 NULL
 */
Node* SingleLinkedListInsert(Node* head, int i, ElementType element);

/**
 * @brief 删除单链表中值为 element 的结点
 * @param head 指向头结点的指针
 * @param element 要删除的结点的值
 * @return 指向被删除结点的指针,如果删除失败返回 NULL
 */
Node* SingleLinkedListDelete(Node* head, ElementType element);

#endif /* SINGLELINKEDLIST */