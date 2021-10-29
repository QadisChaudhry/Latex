#include <stdio.h>

int main (int argc, char *argv[])
{
    int i, *p, count = 0;
    p = &count;

    for (i = 3; i < i/2 + 10; i=i+i) {
        count++;
        (*p)++;
    }

    printf("count = %d, Have a wonderful day.\n", count);
    return 0;
}
