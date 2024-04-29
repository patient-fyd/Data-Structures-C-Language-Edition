#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 100
#define ERROR_VALUE -999999
typedef int datatype;

typedef struct{
  datatype a[MAXSIZE];
  int size;
}sequence_list;


/**
 * 函数名称: init
 * 实现文件名: sequlist.c
 * 功能描述: 顺序表的初始化————置空表
 * @param : 指向sequence_list的指针变量slt
 * @return:  无
 */
void init(sequence_list *slt);


/**
 * 函数名称: append
 * 实现文件名: sequlist.c
 * 功能描述: 在顺序表后部进行插入操作
 * @param: 指向sequence_list的指针变量slt
 * @param: 待插入的datatype变量x
 * @return:  int, 0表示插入成功，-1表示插入失败
 */
int append(sequence_list *slt, datatype x);


/**
 * 函数名称: display
 * 实现文件名: sequlist.c
 * 功能描述: 打印顺序表的各结点值
 * @param sequence_list型变量slt
 * @return: 无
 */
void display(sequence_list slt);


/**
 * 函数名称: empty
 * 实现文件名: sequlist.c
 * 功能描述: 判断顺序表是否为空
 * @param: sequence_list型变量slt
 * @return:  int, 1表示为空，0表示不为空
 */
int empty(sequence_list slt);


/**
 * 函数名称: find
 * 实现文件名: sequlist.c
 * 功能描述: 查找顺序表中值为x的结点位置
 * @param: sequence_list型变量slt
 * @param: 要查找的datatype变量x
 * @return:  int, 找到返回结点位置，未找到返回-1
 */
int find(sequence_list slt, datatype x);


/**
 * 函数名称: get
 * 实现文件名: sequlist.c
 * 功能描述: 取得顺序表中第 i 个结点的值
 * @param sequence_list型变量slt
 * @param 要查找的结点位置i
 * @return:  datatype型变量，返回第 i 个结点的值
 */
datatype get(sequence_list slt, int i);


/**
 * 函数名称: insert
 * 实现文件名: sequlist.c
 * 功能描述: 在顺序表的position位置插入值为 x 的结点
 * @param 指向sequence_list的指针变量slt
 * @param position 要插入的结点位置
 * @param 要插入的datatype变量x
 * @return:  插入成功返回0，插入失败返回-1
 */
int insert(sequence_list *slt, int position, datatype x);


/**
 * 函数名称: delete
 * 实现文件名: sequlist.c
 * 功能描述: 删除sequence_list中position位置的结点
 * @param 指向sequence_list的指针变量slt
 * @param position 要删除的结点位置
 * @return:  删除成功返回0，删除失败返回-1
 */
int delete(sequence_list *slt, int position);

//测试用例
void seqlist_test();