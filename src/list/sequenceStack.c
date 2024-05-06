#include "../include/list/sequenceStack.h"

void SequenceStackInit(SequenceStack* stack) {
    stack->top = 0;
}

int SequenceStackIsEmpty(SequenceStack stack) {
    return stack.top == 0;
}

ElementType SequenceStackRead(SequenceStack stack) {
    if (SequenceStackIsEmpty(stack)) {
        printf("栈为空\n");
        return ERROR_VALUE;
    } else {
        return stack.array[stack.top - 1];
    }
}

int SequenceStackPush(SequenceStack* stack, ElementType element) {
    if (stack->top == MAX_SIZE) {
        printf("栈已满,插入失败\n");
        return -1;
    }
    stack->array[stack->top++] = element;
    return 0;
}

int SequenceStackPop(SequenceStack* stack) {
    if (SequenceStackIsEmpty(*stack)) {
        printf("栈为空,删除失败\n");
        return -1;
    }
    stack->top--;
    return 0;
}