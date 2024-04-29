#include "../include/list/seqstack.h"

void init(sequence_stack *st){
    st->top = 0;
}

int empty(sequence_stack st){
    return st.top ? 0 : 1;
}

datatype read(sequence_stack st){
    if(empty(st)){
        printf("栈是空的\n");
        return ERROR_VALUE;
    }else{
        return st.a[st.top - 1];
    }
}


int push(sequence_stack *st, datatype x){
    if(st->top == MAXSIZE){
        printf("栈是满的,插入失败\n");
        return -1;
    }
    st->a[st->top++] = x;
    return 0;
}

int pop(sequence_stack *st){
    if(st->top == 0){
        printf("栈是空的,删除失败\n");
        return -1;
    }
    st->top--;
    return 0;
}
