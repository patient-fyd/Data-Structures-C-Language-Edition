#include "list/sequlist.h"

void seqlist_test(){
    sequence_list slt;
    init(&slt);
    append(&slt,1);
    append(&slt,2);
    append(&slt,3);
    append(&slt,4);
    append(&slt,5);
    display(slt);
}