#include <stdio.h>

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main() {
    int arr[6] = {12, 100, 10, 1000, 11, 12};
    int size = sizeof arr / 4;
    int *p1 = &arr[0];
    int *p2 = &arr[size-1];
    printf("Orignial Array: \n");
    for (int i=0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i=0; i < size / 2; i++) {
        swap(p1, p2);
        p1++;
        p2--;
    }
    printf("Reversed Array: \n");
    for (int i=0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
