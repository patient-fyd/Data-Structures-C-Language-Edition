//
//  hlnklist.h
//  include\list
//  单链表的实现
//  ADT: hlnklist{init,display,find,insert,delete}
//
//  Created by patent.fyd@gmail

#ifndef hlnklist_h
#define hlnklist_h

#include <stdio.h>
#include <stdlib.h>

typedef int datatype;
typedef struct link_node {
    datatype data;
    struct link_node *next;
} node;

/**
 * 函数名称: head_init
 * 实现文件名: hlnklist.c
 * 功能描述: 建立一个空的带头结点的单链表
 * @param 无
 * @return:  指向一个node类型变量的指针
 */
node *head_init();


/**
 * 函数名称: head_display
 * 实现文件名: hlnklist.c
 * 功能描述: 输出带头结点的单链表中各结点的值
 * @param 指向node类型变量的指针head
 * @return:  无
 */
void head_display(node *head);


/**
 * 函数名称: head_find
 * 实现文件名: hlnklist.c
 * 功能描述: 在带头结点的单链表中查找第i个结点的存放地址
 * @param 指向node类型变量的指针head,
 * @param int变量i，表示第i个结点
 * @return:指向node类型变量的指针，找到返回指向该结点的指针，找不到返回NULL
 */
node *head_find(node *head, int i);


/**
 * 函数名称: head_insert
 * 实现文件名: hlnklist.c
 * 功能描述: 在带头结点的单链表第i个结点后插入值为data的新结点
 * @param 指向node类型变量的指针head,
 * @param int变量i，表示第i个结点,
 * @param datatype变量data，表示新结点的值向
 * @return:  指向node类型变量的指针，插入成功返回指向该结点的指针
 */
node *head_insert(node *head, int i, datatype data);


/**
 * 函数名称: delete
 * 实现文件名: slnklist.c
 * 功能描述: 在单链表中删除一个值为data的结点
 * @param 指向node类型变量的指针head
 * @param datatype变量data，表示要删除的结点的值
 * @return:  指向node类型变量的指针，删除成功返回指向该结点的指针
 */
node *head_delete(node *head, datatype data);


void hlnklist_test();


#endif /* hlnklist_h */