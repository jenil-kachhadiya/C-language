#include <stdio.h>

int main() {
    int size;
    printf("Enter the array's size: ");
    scanf("%d", &size);

    int a1[size];

    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a1[i]);
    }

    printf("Negative elements from an Array: ");
    for (int i = 0; i < size; i++) {
        if (a1[i] < 0) {
            printf("%d ", a1[i]);
        }
    }

    printf("\n");

    int rows, cols;
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int a2[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a2[%d][%d] = ", i, j);
            scanf("%d", &a2[i][j]);
        }
    }

    int max = a2[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (a2[i][j] > max) {
                max = a2[i][j];
            }
        }
    }

    printf("The largest element is: %d\n", max);

    int n;
    printf("Enter the array's row & column size: ");
    scanf("%d", &n);

    int a3[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("a3[%d][%d] = ", i, j);
            scanf("%d", &a3[i][j]);
        }
    }

    printf("The transpose matrix of an array:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a3[j][i]);
        }
        printf("\n");
    }

    int rows4, cols4;
    printf("Enter the array's row size: ");
    scanf("%d", &rows4);
    printf("Enter the array's column size: ");
    scanf("%d", &cols4);

    int a4[rows4][cols4];

    for (int i = 0; i < rows4; i++) {
        for (int j = 0; j < cols4; j++) {
            printf("a4[%d][%d] = ", i, j);
            scanf("%d", &a4[i][j]);
        }
    }

    int r4, c4, sum;

    sum = 0;
    printf("Enter row number: ");
    scanf("%d", &r4);

    printf("Elements of row %d: ", r4);
    for (int j = 0; j < cols4; j++) {
        printf("%d ", a4[r4][j]);
        sum += a4[r4][j];
    }
    printf("\nThe sum of a row: %d\n", sum);

    sum = 0;
    printf("Enter column number: ");
    scanf("%d", &c4);

    printf("Elements of column %d: ", c4);
    for (int i = 0; i < rows4; i++) {
        printf("%d ", a4[i][c4]);
        sum += a4[i][c4];
    }
    printf("\nThe sum of a column: %d\n", sum);

    return 0;
}


/* 
Enter the array's size: 4
a[0] = 1
a[1] = -2
a[2] = 4
a[3] = -7
Negative elements from an Array: -2 -7 
Enter the array's row size: 2
Enter the array's column size: 3
a2[0][0] = 2
a2[0][1] = 4
a2[0][2] = 5
a2[1][0] = 6
a2[1][1] = 3
a2[1][2] = 7
The largest element is: 7
Enter the array's row & column size: 3
a3[0][0] = 1
a3[0][1] = 2
a3[0][2] = 3
a3[1][0] = 4
a3[1][1] = 5
a3[1][2] = 6
a3[2][0] = 7
a3[2][1] = 8
a3[2][2] = 9
The transpose matrix of an array:
1 4 7
2 5 8
3 6 9
Enter the array's row size: 3
Enter the array's column size: 3
a4[0][0] = 4
a4[0][1] = 5
a4[0][2] = 6
a4[1][0] = 3
a4[1][1] = 9
a4[1][2] = 3
a4[2][0] = 4
a4[2][1] = 1
a4[2][2] = 1
Enter row number: 0
Elements of row 0: 4 5 6 
The sum of a row: 15
Enter column number: 2
Elements of column 2: 6 3 1 
The sum of a column: 10
*/