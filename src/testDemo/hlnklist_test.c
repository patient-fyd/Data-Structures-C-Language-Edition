#include "../../include/list/hlnklist.h"

void hlnklist_test() {
    struct link_node hl;
    head_init(&hl);
    head_insert(&hl, 1, 10);
    head_insert(&hl, 2, 20);
    head_insert(&hl, 3, 30);
    head_insert(&hl, 4, 40);
    head_insert(&hl, 5, 50);
    head_display(&hl);
}