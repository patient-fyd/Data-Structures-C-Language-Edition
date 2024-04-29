#include "list/sequlist.h"

void seqlist_test() {
    sequence_list slt;
    init(&slt);
    append(&slt, 1);
    append(&slt, 2);
    append(&slt, 3);
    append(&slt, 4);
    append(&slt, 5);
    display(slt);
    printf("\n");
    int i = find(slt, 5);
    printf("5的位置是 %d\n", i);
    int j = get(slt, 3);
    printf("3的值是 %d\n", j);
    insert(&slt, 3, 6);
    display(slt);
    printf("\n");
    delete(&slt, 0);
    display(slt);
}