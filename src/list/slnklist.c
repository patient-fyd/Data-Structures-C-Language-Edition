#include "../include/list/slnklist.h"

node *init() {
    return NULL;
}

void display(node *head) {
    node *p = head;
    if (p == NULL) {
        printf("链表为空\n");
        return;
    }

    printf("链表中各结点的值为: ");
    while (p != NULL) {
        printf("%5d", p->data);
        p = p->next;
    }
    printf("\n");
}

node *find(node *head, int i) {
    node *p = head;
    int j = 1;

    // 检查输入合法性
    if (i < 1)
        return NULL;

    // 遍历链表
    while (p != NULL && j < i) {
        p = p->next;
        j++;
    }

    // 返回第i个节点或者NULL
    return (j == i) ? p : NULL;
}

node *insert(node *head, int i, datatype data) {
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = data;

    // 处理空链表情况
    if (head == NULL) {
        newNode->next = NULL;
        return newNode;
    }

    // 处理插入头部情况
    if (i == 1) {
        newNode->next = head;
        return newNode;
    }

    // 找到要插入位置的前一个节点
    node *prev = find(head, i - 1);

    // 如果插入位置合法
    if (prev != NULL) {
        newNode->next = prev->next;
        prev->next = newNode;
    } else {
        printf("第%d个结点不存在\n", i);
    }

    return head;
}

node *delete(node *head, datatype data) {
    // 创建哨兵节点
    node sentinel = {0};
    sentinel.next = head;
    node *prev = &sentinel;
    node *curr = head;

    // 遍历链表
    while (curr) {
        if (curr->data == data) {
            prev->next = curr->next;
            free(curr);
            break;
        }
        prev = curr;
        curr = curr->next;
    }

    // 如果没有找到要删除的节点
    if (curr == NULL) {
        printf("未找到要删除的节点\n");
    }

    // 返回新的链表头节点
    return sentinel.next;
}