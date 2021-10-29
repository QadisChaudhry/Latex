#include <stdio.h>

typedef struct node {
    int value;
    struct node *next;
} node;

int ll_has_cycle(node *first) {
    node * head = first;
    while (head->next) {
        head = head->next;
        if (head == first)
            return 1;
    }
    return 0;
}

void test_ll_has_cycle(void) {
    int i;
    node nodes[5];
    for(i=0; i < sizeof(nodes)/sizeof(node); i++) {
        nodes[i].next = NULL;
        nodes[i].value = i;
    }
    nodes[0].next = &nodes[1];
    nodes[1].next = &nodes[2];
    nodes[2].next = &nodes[3];
    printf("Checking first list for cycles. There should be none, ll_has_cycle says it has %s cycle\n", ll_has_cycle(&nodes[0])?"a":"no");
    printf("Checking length-zero list for cycles. There should be none, ll_has_cycle says it has %s cycle\n", ll_has_cycle(NULL)?"a":"no");
    printf("A node value is: %d", nodes[0].value);
}

int main(void) {
    test_ll_has_cycle();
    return 0;
}
