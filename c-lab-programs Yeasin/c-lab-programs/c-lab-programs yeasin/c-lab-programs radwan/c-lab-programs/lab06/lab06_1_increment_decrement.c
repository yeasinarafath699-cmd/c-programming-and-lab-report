#include <stdio.h>

int main() {
    int a = 5, b;

    printf("Initial a = %d\n", a);
    b = a++;
    printf("Post-increment: b = %d, a = %d\n", b, a);
    b = ++a;
    printf("Pre-increment : b = %d, a = %d\n", b, a);
    b = a--;
    printf("Post-decrement: b = %d, a = %d\n", b, a);
    b = --a;
    printf("Pre-decrement : b = %d, a = %d\n", b, a);

    a += 10; printf("a += 10 -> %d\n", a);
    a -= 3;  printf("a -= 3  -> %d\n", a);
    a *= 2;  printf("a *= 2  -> %d\n", a);
    return 0;
}
