#include <stdio.h>
#define MAX_CHAR 256
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    Frequency(str);

    return 0;
}
void Frequency(char *str) {
    int freq[MAX_CHAR] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    printf("Character Frequency\n");
    for (int i = 0; i < MAX_CHAR; i++) {
        if (freq[i] != 0) {
            printf("%c \t %d\n", i, freq[i]);
        }
    }
}