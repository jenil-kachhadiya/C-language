#include <stdio.h>

int check(int n) {
    if (n % 3 == 0 && n % 5 == 0)
        printf("Divisible by both 3 and 5");
    else
        printf("Not divisible");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check(num);
    return 0;
}

// Enter a number: 15
// Divisible by both 3 and 5