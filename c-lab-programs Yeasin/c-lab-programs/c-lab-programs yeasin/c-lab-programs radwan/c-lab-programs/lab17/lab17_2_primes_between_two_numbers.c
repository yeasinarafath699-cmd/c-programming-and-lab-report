#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers (start end): ");
    scanf("%d %d", &a, &b);

    printf("Prime numbers between %d and %d:\n", a, b);
    for (int n = a; n <= b; n++) {
        if (n < 2) continue;
        int isPrime = 1;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) printf("%d ", n);
    }
    printf("\n");
    return 0;
}
