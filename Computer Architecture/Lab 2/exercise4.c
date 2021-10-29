#include <stdio.h>

int main()
{
    int a[5] = {42,31,65,78,9};
    int *arr_pointer = &a[3];
    *arr_pointer = 20;
    arr_pointer++;
    printf("%d\n", *arr_pointer);
    return 0;
}
