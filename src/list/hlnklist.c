#include "../include/list/hlnklist.h"

node *head_init() {
    node *head = (node *) malloc(sizeof(node));
    head->next = NULL;
    return head;
}

void head_display(node *head) {
    node *p = head->next;
    if (p == NULL) {
        printf("单链表是空的\n");
    }
    while (p != NULL) {
        printf("%5d", p->data);
        p = p->next;
    }
    printf("\n");
}

node *head_find(node *head, int index) {
    if (head == NULL) {
        printf("链表为空\n");
        return NULL;
    }

    node *p = head;
    int count = 0;
    while (p != NULL && count != index) {
        p = p->next;
        count++;
    }

    if (count != index) {
        printf("第 %d 个结点不存在\n", index);
        return NULL; // 第 index 个结点不存在
    }

    return p;
}

node *head_insert(node *head, int i, datatype data) {
    // 1. 处理插入位置非法的情况
    if (i < 0) {
        printf("插入位置 %d 非法\n", i);
        return head;
    }

    // 2. 处理空链表或在头结点前插入的情况
    node *new_node = (node *)malloc(sizeof(node));
    if (new_node == NULL) {
        printf("内存分配失败\n");
        return head;
    }
    new_node->data = data;

    if (head == NULL || i == 0) {
        new_node->next = head;
        head = new_node;
        return head;
    }

    // 3. 处理一般情况
    node *p = head;
    int count = 0;
    while (p->next != NULL && count != i - 1) {
        p = p->next;
        count++;
    }

    // 4. 处理插入位置超出链表长度的情况
    if (count != i - 1) {
        printf("第 %d 个结点不存在,插入失败\n", i);
        free(new_node); // 释放分配的内存
        return head;
    }

    // 5. 插入新结点
    new_node->next = p->next;
    p->next = new_node;

    return head;
}
