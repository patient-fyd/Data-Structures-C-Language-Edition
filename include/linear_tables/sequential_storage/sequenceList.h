/**
 * @file sequenceList.h
 * @author G3327555
 * @brief 顺序表的实现
 * @version 1.0
 * @date 2023-05-06
 *
 * 该文件实现了顺序表的抽象数据类型(ADT)
 * ADT: sequence_list{SequenceListInit, SequenceListAppend, SequenceListDisplay, SequenceListFind, SequenceListGet, SequenceListInsert, SequenceListDelete}
 */

#ifndef SEQUENCELIST_H
#define SEQUENCELIST_H

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100
#define ERROR_VALUE (-999999)

typedef int ElementType;

typedef struct {
    ElementType array[MAX_SIZE];
    int size;
} SequenceList;

/**
 * @brief 初始化顺序表
 *
 * @param list 指向SequenceList的指针
 */
void SequenceListInit(SequenceList* list);

/**
 * @brief 在顺序表尾部插入元素
 *
 * @param list 指向SequenceList的指针
 * @param element 待插入的元素
 * @return int 0表示插入成功, -1表示插入失败
 */
int SequenceListAppend(SequenceList* list, ElementType element);

/**
 * @brief 打印顺序表中的所有元素
 *
 * @param list SequenceList结构体
 */
void SequenceListDisplay(SequenceList list);

/**
 * @brief 判断顺序表是否为空
 *
 * @param list SequenceList结构体
 * @return int 1表示为空, 0表示不为空
 */
int SequenceListIsEmpty(SequenceList list);

/**
 * @brief 查找顺序表中元素的位置
 *
 * @param list SequenceList结构体
 * @param element 要查找的元素
 * @return int 找到返回元素位置, 未找到返回-1
 */
int SequenceListFind(SequenceList list, ElementType element);

/**
 * @brief 获取顺序表中指定位置的元素
 *
 * @param list SequenceList结构体
 * @param index 要获取元素的位置
 * @return ElementType 返回指定位置的元素值
 */
ElementType SequenceListGet(SequenceList list, int index);

/**
 * @brief 在顺序表的指定位置插入元素
 *
 * @param list 指向SequenceList的指针
 * @param position 要插入的位置
 * @param element 要插入的元素
 * @return int 插入成功返回0, 插入失败返回-1
 */
int SequenceListInsert(SequenceList* list, int position, ElementType element);

/**
 * @brief 删除顺序表中指定位置的元素
 *
 * @param list 指向SequenceList的指针
 * @param position 要删除元素的位置
 * @return int 删除成功返回0, 删除失败返回-1
 */
int SequenceListDelete(SequenceList* list, int position);

void SequenceListTest();

#endif /* SEQUENCELIST_H */