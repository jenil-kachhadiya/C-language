#include <stdio.h>

int main() {
    for (int i = 10; i >= 6; i--) {
        for (int space = 10; space > i; space--)
            printf("  ");
        for (int j = i; j >= 6; j--)
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}

//10 9 8 7 6 
//   9 8 7 6 
//     8 7 6 
//       7 6 
//         6 