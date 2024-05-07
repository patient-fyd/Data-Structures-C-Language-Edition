#include "../../include/list/headNodeSingleLinkedList.h"

void HeadNodeSingleLinkedList_test() {
    Node *head = HeadInit();
    if (head == NULL) {
        printf("内存分配失败\n");
        return;
    }

    HeadInsert(head, 0, 10);
    HeadInsert(head, 1, 20);
    HeadInsert(head, 2, 30);
    HeadInsert(head, 3, 40);
    HeadInsert(head, 4, 50);

    printf("单链表元素: ");
    HeadDisplay(head);

    // 释放内存
    Node *p = head->next;
    while (p != NULL) {
        Node *temp = p;
        p = p->next;
        free(temp);
    }
    free(head);
}