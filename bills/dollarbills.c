#include <stdio.h>

int main(void) {
    int dollarAmount, bill20, bill10, bill5, bill1, amountAfter20, amountAfter10, amountAfter5;
    printf("Enter a dollar amount: ");
    scanf("%d", &dollarAmount);

    bill20 = dollarAmount / 20;
    amountAfter20 = dollarAmount - (bill20 * 20);
    bill10 = amountAfter20 / 10;
    amountAfter10 = amountAfter20 - (bill10 * 10);
    bill5 = amountAfter10 / 5;
    amountAfter5 = amountAfter10 - (bill5 * 5);
    bill1 = amountAfter5 / 1;

    printf("20$ bills: %d\n", bill20);
    printf("10$ bills: %d\n", bill10);
    printf("5$ bills: %d\n", bill5);
    printf("1$ bills: %d\n", bill1);
}