//
//  seqqueue.h
//  include\list
//  队列的实现
//  ADT: sequence_queue{init,empty,display,get,insert,dele}
//
//  Created by patient.fyd@gmail

#include <stdio.h>

#define MAXSIZE 100
#define ERROR_VALUE -99999

typedef int datatype;
typedef struct {
    datatype a[MAXSIZE];
    int front;
    int rear;
}sequnence_queue;


/**
 * 函数名称:init
 * 实现文件名:seqqueue.c
 * 功能描述:队列初始化
 * @param 指向seqque的指针sq
 * @return:无
 */
void init(sequnence_queue *sq);


/**
 * 函数名称: empty
 * 实现文件名: seqqueue.c
 * 功能描述: 判断队列是否为空
 * @param sequence_queue sq
 * @return:  返回1表示队列为空，返回0表示队列不为空
 */
int empty(sequnence_queue sq);


/**
 * 函数名称: display
 * 实现文件名: seqqueue.c
 * 功能描述: 打印队列的结点值
 * @param sequence_queue sq
 * @return:  无
 */
void display(sequnence_queue sq);


/**
 * 函数名称: get
 * 实现文件名: seqqueue.c
 * 功能描述: 取得队列的队首结点值
 * @param sequence_queue sq
 * @return:  datatype类型，返回队首结点值
 */
datatype get_front(sequnence_queue sq);


/**
 * 函数名称: insert
 * 实现文件名: seqqueue.c
 * 功能描述: 队列的插入操作
 * @param 指向seqque的指针sq
 * @param datatype类型的数据x
 * @return:  返回0表示插入成功，返回-1表示插入失败
 */
int insert(sequnence_queue *sq, datatype x);


/**
 * 函数名称: dele
 * 实现文件名: seqqueue.c
 * 功能描述: 队列的删除操作
 * @param 指向seqque的指针sq
 * @return:  删除成功返回0，删除失败返回-1
 */
int dele(sequnence_queue *sq);


/**
 * 函数名称: insert_sequence_cqueue
 * 实现文件名: seqqueue.c
 * 功能描述: 循环队列的插入操作
 * @param 指向seqque的指针sq
 * @param datatype类型的数据x
 * @return:  插入成功返回0，插入失败返回-1
 */
int insert_sequence_cqueue(sequnence_queue *sq, datatype x);


/**
 * 函数名称: delete_sequence_cqueue
 * 实现文件名: seqqueue.c
 * 功能描述: 循环队列的删除操作
 * @param 指向seqque的指针sq
 * @return:  删除成功返回0，删除失败返回-1
 */
int delete_sequence_cqueue(sequnence_queue *sq);