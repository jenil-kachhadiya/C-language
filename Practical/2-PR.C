#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {

            if (str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' &&
                str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U') {
                count++;
            }
        }
    }
    printf("Total consonants = %d", count);
    return 0;
}

// Enter a sentence: red & white multimedia education
// Total consonants = 14