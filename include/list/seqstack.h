#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 100
#define ERROR_VALUE -99999

typedef int datatype;
typedef struct {
    datatype a[MAXSIZE];
    int top;
}sequence_stack;


/**
 * 函数名称: init
 * 实现文件名: seqstack.c
 * 功能描述: 栈的初始化
 * @param: 指向sequnence_stack的指针变量st
 * @return: 无
 */
void init(sequence_stack *st);


/**
 * 函数名称: empty
 * 实现文件名: seqstack.c
 * 功能描述: 判断栈是否为空
 * @param sequnence_stack类型的变量st
 * @return:  int类型,1表示栈为空，0表示栈不为空
 */
 int empty(sequence_stack st);

 
 /**
  * 函数名称: read
  * 实现文件名: seqstack.c
  * 功能描述: 读栈顶结点值
  * @param sequnence_stack类型的变量st
  * @return: 栈顶结点值
  */
 datatype read(sequence_stack st);


 /**
  * 函数名称: push
  * 实现文件名: seqstack.c
  * 功能描述: 栈的插入操作
  * @param 指向sequnence_stack类型的指针变量st
  * @param datatype类型的变量x
  * @return:  插入成功返回0，插入失败返回-1
  */
 int push(sequence_stack *st, datatype x);


 /**
  * 函数名称: pop
  * 实现文件名: seqstack.c
  * 功能描述: 栈的删除操作
  * @param 指向sequnence_stack类型的指针变量st
  * @return:  删除成功返回0，删除失败返回-1
  */
 int pop(sequence_stack *st);