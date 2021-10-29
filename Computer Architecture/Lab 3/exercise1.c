#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* array;
    array = (int*) malloc(20 * sizeof(int));
    free(array);
    return 0;
}
