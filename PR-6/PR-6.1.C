#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, len;

    printf("Enter string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0';

    if(strcmp(str, rev) == 0)
        printf("The given string is a Palindrome.\n");
    else
        printf("The given string is not a Palindrome.\n");

}
// Enter string: jenil
// The given string is not a Palindrome.

// Enter string: nayan
// The given string is a Palindrome.