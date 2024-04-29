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


