#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int larger = (a > b) ? a : b;
    printf("Larger number = %d\n", larger);
    return 0;
}
