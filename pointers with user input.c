#include <stdio.h>

int main() {
    int num;
    int *p = &num;

    printf("Enter a number: ");
    scanf("%d", p);   // passing pointer directly

    printf("You entered: %d\n", *p);

    return 0;
}