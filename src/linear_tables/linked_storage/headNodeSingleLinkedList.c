#include "linear_tables/linked_storage/headNodeSingleLinkedList.h"

Node *HeadInit() {
    Node *head = (Node *) malloc(sizeof(Node));
    if (head == NULL) {
        printf("内存分配失败\n");
        return NULL;
    }
    head->next = NULL;
    return head;
}

void HeadDisplay(const Node *head) {
    if (head == NULL) {
        printf("单链表为空\n");
        return;
    }

    const Node *p = head->next;
    if (p == NULL) {
        printf("单链表是空的\n");
        return;
    }

    printf("单链表元素: ");
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

Node *HeadFind(const Node *head, int index) {
    if (head == NULL) {
        printf("链表为空\n");
        return NULL;
    }

    const Node *p = head->next;
    int count = 0;
    while (p != NULL && count != index) {
        p = p->next;
        count++;
    }

    if (count != index) {
        printf("第 %d 个结点不存在\n", index);
        return NULL;
    }

    return (Node *)p;
}

Node *HeadInsert(Node *head, int index, DataType data) {
    if (index < 0) {
        printf("插入位置 %d 非法\n", index);
        return head;
    }

    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("内存分配失败\n");
        return head;
    }
    newNode->data = data;

    if (head == NULL || index == 0) {
        newNode->next = head->next;
        head->next = newNode;
        return head;
    }

    Node *p = head;
    int count = 0;
    while (p->next != NULL && count != index - 1) {
        p = p->next;
        count++;
    }

    if (count != index - 1) {
        printf("第 %d 个结点不存在,插入失败\n", index);
        free(newNode);
        return head;
    }

    newNode->next = p->next;
    p->next = newNode;

    return head;
}