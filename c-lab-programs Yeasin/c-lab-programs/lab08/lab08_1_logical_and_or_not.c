#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;

    printf("(a < b) && (b < c) = %d\n", (a < b) && (b < c));
    printf("(a > b) || (b < c) = %d\n", (a > b) || (b < c));
    printf("!(a > b)           = %d\n", !(a > b));
    printf("(a > b) && (b < c) = %d\n", (a > b) && (b < c));
    return 0;
}
