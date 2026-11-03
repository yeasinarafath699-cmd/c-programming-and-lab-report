#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (!isalpha(ch)) {
        printf("Not an alphabet.\n");
    } else {
        char lower = tolower(ch);
        if (lower == 'a' || lower == 'e' || lower == 'i' ||
            lower == 'o' || lower == 'u')
            printf("%c is a vowel.\n", ch);
        else
            printf("%c is a consonant.\n", ch);
    }
    return 0;
}
