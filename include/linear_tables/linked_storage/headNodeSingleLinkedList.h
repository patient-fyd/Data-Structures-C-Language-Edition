/**
 * @file headNodeSingleLinkedList.h
 * @brief 带头结点的单链表的实现
 * @author G3327555
 * @date 2024-05-07
 *
 * @copyright Copyright (c) 2023
 *
 * 该文件实现了带头结点的单链表的抽象数据类型(ADT)
 * ADT: headNodeSingleLinkedList{HeadInit, HeadDisplay, HeadFind, HeadInsert, HeadDelete}
 */

#ifndef HEADNODESINGLELINKEDLIST_H
#define HEADNODESINGLELINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef int DataType;

/**
 * @brief 链表节点结构体
 */
typedef struct LinkNode {
    DataType data;
    struct LinkNode *next;
} Node;

/**
 * @brief 建立一个空的带头结点的单链表
 * @return 指向头节点的指针
 */
Node *HeadInit(void);

/**
 * @brief 输出带头结点的单链表中各结点的值
 * @param head 指向头节点的指针
 */
void HeadDisplay(const Node *head);

/**
 * @brief 在带头结点的单链表中查找第i个结点
 * @param head 指向头节点的指针
 * @param i 要查找的结点序号
 * @return 指向查找到的结点的指针,未找到返回NULL
 */
Node *HeadFind(const Node *head, int i);

/**
 * @brief 在带头结点的单链表第i个结点后插入值为data的新结点
 * @param head 指向头节点的指针
 * @param i 要插入位置的结点序号
 * @param data 新结点的数据值
 * @return 插入成功返回指向新结点的指针,失败返回NULL
 */
Node *HeadInsert(Node *head, int i, DataType data);

/**
 * @brief 在单链表中删除一个值为data的结点
 * @param head 指向头节点的指针
 * @param data 要删除结点的数据值
 * @return 删除成功返回指向被删除结点的指针,失败返回NULL
 */
Node *HeadDelete(Node *head, DataType data);

#endif /* HEADNODESINGLELINKEDLIST_H */