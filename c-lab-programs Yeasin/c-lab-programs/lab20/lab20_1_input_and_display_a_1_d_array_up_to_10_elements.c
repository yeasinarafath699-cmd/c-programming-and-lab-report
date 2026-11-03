#include <stdio.h>

int main() {
    int arr[10], n;
    printf("How many elements (1-10)? ");
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("Please enter a number between 1 and 10.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
