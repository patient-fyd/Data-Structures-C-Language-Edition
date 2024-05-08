#include "linear_tables/sequential_storage/sequenceStack.h"

void SequenceStackTest() {
    SequenceStack stack;
    SequenceStackInit(&stack);

    printf("初始化后,栈是否为空: %d\n", SequenceStackIsEmpty(stack));

    SequenceStackPush(&stack, 10);
    SequenceStackPush(&stack, 20);
    SequenceStackPush(&stack, 30);
    printf("入栈后,栈顶元素: %d\n", SequenceStackRead(stack));

    printf("出栈操作: %d\n", SequenceStackPop(&stack));
    printf("出栈后,栈顶元素: %d\n", SequenceStackRead(stack));

    SequenceStackPush(&stack, 40);
    printf("入栈后,栈顶元素: %d\n", SequenceStackRead(stack));

    printf("栈是否为空: %d\n", SequenceStackIsEmpty(stack));
}