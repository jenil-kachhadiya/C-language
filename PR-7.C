#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float divide(float a, float b);
int mod(int a, int b);

int main() {
    int choice;
    float num1, num2;

    while (1) { 
        printf("\n +-*/ Calculator +-*/\n");
        printf("Press 1 for addition (+)\n");
        printf("Press 2 for subtraction (-)\n");
        printf("Press 3 for multiplication (*)\n");
        printf("Press 4 for division (/)\n");
        printf("Press 5 for modules(%%)\n");
        printf("Press 0 for Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting calculator. Goodbye!\n");
            break;
        }

        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);

        switch (choice) {
            case 1:
                printf("Result = %d\n", add(num1, num2));
                break;
            case 2:
                printf("Result = %d\n", sub(num1, num2));
                break;
            case 3:
                printf("Result = %d\n", mul(num1, num2));
                break;
            case 4:
                if (num2 == 0)
                    printf("Error! Division by zero not allowed.\n");
                else
                    printf("Result = %.2f\n", divide(num1, num2));
                break;
            case 5:
                if ((int)num2 == 0)
                    printf("Error! Modulus by zero not allowed.\n");
                else
                    printf("Result = %d\n", mod((int)num1, (int)num2));
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
float divide(float a, float b) {
    return a / b;
}
int mod(int a, int b) {
    return a % b;
}    


/*
 +--+ Calculator +--+
Press 1 for addition (+)
Press 2 for subtraction (-)
Press 3 for multiplication (*)
Press 4 for division (/)
Press 5 for modules(%)
Press 0 for Exit
Enter your choice: 1
Enter first number: 2
Enter second number: 7
Result = 9

  +--+ Calculator +--+
Press 1 for addition (+)
Press 2 for subtraction (-)
Press 3 for multiplication (*)
Press 4 for division (/)
Press 5 for modules(%)
Press 0 for Exit
Enter your choice: 3
Enter first number: 3
Enter second number: 7
Result = 21

  +--+ Calculator +--+
Press 1 for addition (+)
Press 2 for subtraction (-)
Press 3 for multiplication (*)
Press 4 for division (/)
Press 5 for modules(%)
Press 0 for Exit
Enter your choice: 5
Enter first number: 8
Enter second number: 3
Result = 2

  +--+ Calculator +--+
Press 1 for addition (+)
Press 2 for subtraction (-)
Press 3 for multiplication (*)
Press 4 for division (/)
Press 5 for modules(%)
Press 0 for Exit
Enter your choice: 0
Exiting calculator. Goodbye!
*/ 