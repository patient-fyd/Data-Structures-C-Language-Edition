#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 100
typedef int datatype;

typedef struct{
  datatype a[MAXSIZE];
  int size;
}sequence_list;

/**
 * 函数功能：顺序表的初始化————置空表
 * 函数参数：指向sequence_list的指针变量slt
 * 函数返回值：无
 * 实现文件：list/sequlist.h，函数名:init
 * */
void init(sequence_list *slt);

/**
 * 函数功能：在顺序表后部进行插入操作
 * 函数参数：指向sequence_list的指针变量slt，
 *          待插入的datatype变量x
 * 函数返回值：无
 * 实现文件：list/sequlist.h，函数名:append
*/
void append(sequence_list *slt, datatype x);

/**
 * 函数功能：打印顺序表的各结点值
 * 函数参数：sequence_list型变量slt
 * 函数返回值：无
 * 实现文件：list/sequlist.h，函数名:display
 * 
*/
void display(sequence_list slt);

//测试用例
void seqlist_test();