#include <stdio.h>

int main() {
    float a, b, c, sum, avg;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    sum = a + b + c;
    avg = sum / 3;
    printf("Sum = %.2f\nAverage = %.2f\n", sum, avg);
    return 0;
}
