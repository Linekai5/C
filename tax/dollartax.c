#include <stdio.h>

int main(void) {
    float dollarCent, tax;

    printf("Enter an amount: ");
    scanf("%f", &dollarCent);
    tax = (5.0 / 100.0) * dollarCent;

    printf("With tax added: %.2f\n", dollarCent + tax);
}