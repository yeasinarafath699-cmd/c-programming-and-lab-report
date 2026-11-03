#include <stdio.h>

int main() {
    char ch, str[100];
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("Enter a string (no spaces): ");
    scanf("%99s", str);
    printf("Character: %c\nString: %s\n", ch, str);
    return 0;
}
