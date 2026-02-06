#include <stdio.h>

int main() {
    int j[5], sum = 0;
    int *p = j;

    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", p + i);

    for (int i = 0; i < 5; i++)
        sum += *(p + i);

    printf("Sum of array = %d", sum);
    return 0;
}

// Enter 5 elements:
// 2
// 9
// 6
// 7
// 8
// Sum of array = 32