#include "../../include/sequlist.h"

void init(sequence_list *slt){
    slt -> size = 0;
}

void append(sequence_list *slt, datatype x){
    if (slt->size == MAXSIZE){
        printf("顺序表是满的！\n");
        exit(1);
    }
    slt -> a[slt->size] = x;
    slt -> size = slt->size + 1;
}

void display(sequence_list slt){
    int i;
    if(!slt.size){
        printf("顺序表是空的！\n");
    }else{
        for(i=0;i<slt.size;i++){
            printf("%5d",slt.a[i]);
        }
    }
}