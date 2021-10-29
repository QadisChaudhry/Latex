#include <stdio.h>
int main(void) {
    int a;
    char *s;
    int v0 = 5, v1 = 4, v2 = 3, v3 = 2;
    printf("Exercise 1:\n====================\n");
    switch(v0) {
        case 0: printf("Hello September\n"); break;
        case 1: printf("Go Rutgers!\n"); break;
        case 2: printf("Busch Student Center \n"); break;
        case 3: printf("New Brunswick \n"); break;
        case 4: printf("Go ");
        case 5: printf("Rutgers!\n");
        default: printf("Have a great semester!\n"); break;
    }
    for(a=5; a<v1; a--) {
        printf("RU ");
    }
    printf("\n");
    if (v2 == 6) {
        s = "Go";
    }
    else {
        s = "Hello";
    }
    if(v3 != v3) {
        printf("%s RUTGERS!\n",s);
    } else {
        printf("%s Scarlet Knights!\n",s);
    }
    return 0;
}
