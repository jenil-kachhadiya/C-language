#include <stdio.h>
int main() {
    char str[100];
    char *p;
    int len = 0;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    p = str;

    while (*p != '\0') {
        if (*p != '\n')
            len++;
        p++;
    }
    printf("The length of string is: %d", len);

}

// Enter any string: Hello World!
// The length of string is: 12