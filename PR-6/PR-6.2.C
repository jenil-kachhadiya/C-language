#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;

    printf("Enter any string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    printf("Frequency of each letter:\n");
    for(i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            printf("%c => %d\n", i, freq[i]);
        }
    }

}

// Enter any string: beginnerbook
// Frequency of each letter:
// b => 2
// e => 2
// g => 1
// i => 1
// k => 1
// n => 2
// o => 2
// r => 1