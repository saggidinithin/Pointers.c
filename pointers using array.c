#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;   // array name acts like pointer

    for(int i = 0; i < 5; i++) {
        printf("Value: %d\n", *(p + i));
    }

    return 0;
}