/*calculates the remaining balance on a loan after the first, second, and 
third monthly payments*/
#include <stdio.h>


int main(void) {
    float loan, rate, payment, monthlyRate, firstPay, secondPay, thirdPay;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    monthlyRate = rate / 12;
    firstPay = loan - payment + (monthlyRate / 100 * loan);
    secondPay = firstPay - payment + (monthlyRate / 100 * firstPay);
    thirdPay = secondPay - payment + (monthlyRate / 100 * secondPay);

    printf("Balance remaining after first payment: %.2f\n", firstPay);
    printf("Balance remaining after second payment: %.2f\n", secondPay);
    printf("Balance remaining after third payment: %.2f\n", thirdPay);
}