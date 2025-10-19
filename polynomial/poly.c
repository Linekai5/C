#include <stdio.h>

int main(void) {
    float x, x5, x4, x3, x2, polynomial;
    printf("Enter value for x: ");
    scanf("%f", &x);
    x5 = x * x * x * x * x;
    x4 = x * x* x * x;
    x3 = x * x * x;
    x2 = x * x;

    polynomial = 3 * x5 + 2 * x4 - 5 * x3 - x2 + 7 * x - 6;

    printf("%f",  polynomial);
}