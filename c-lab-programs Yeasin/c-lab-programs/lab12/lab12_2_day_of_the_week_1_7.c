#include <stdio.h>

int main() {
    int d;
    printf("Enter a number (1-7): ");
    scanf("%d", &d);

    if (d == 1) printf("Monday\n");
    else if (d == 2) printf("Tuesday\n");
    else if (d == 3) printf("Wednesday\n");
    else if (d == 4) printf("Thursday\n");
    else if (d == 5) printf("Friday\n");
    else if (d == 6) printf("Saturday\n");
    else if (d == 7) printf("Sunday\n");
    else printf("Invalid input! Enter 1 to 7.\n");
    return 0;
}
