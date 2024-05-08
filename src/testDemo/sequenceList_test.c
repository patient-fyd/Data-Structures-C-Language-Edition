#include "linear_tables/sequential_storage/sequenceList.h"

void SequenceListTest() {
    SequenceList list;
    SequenceListInit(&list);

    SequenceListAppend(&list, 1);
    SequenceListAppend(&list, 2);
    SequenceListAppend(&list, 3);
    SequenceListAppend(&list, 4);
    SequenceListAppend(&list, 5);

    SequenceListDisplay(list);
    printf("\n");

    int position = SequenceListFind(list, 5);
    printf("5的位置是 %d\n", position);

    ElementType value = SequenceListGet(list, 3);
    printf("3的值是 %d\n", value);

    SequenceListInsert(&list, 3, 6);
    SequenceListDisplay(list);
    printf("\n");

    SequenceListDelete(&list, 0);
    SequenceListDisplay(list);
}