#include <stdio.h>

int main() {
    int age = 20;
    float gpa = 3.75f;
    double pi = 3.141592653;
    char grade = 'A';
    const int MAX = 100;

    printf("int    : %d\n", age);
    printf("float  : %.2f\n", gpa);
    printf("double : %.9lf\n", pi);
    printf("char   : %c\n", grade);
    printf("const  : %d\n", MAX);
    return 0;
}
