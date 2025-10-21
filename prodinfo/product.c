#include <stdio.h>

int main(void) {
    int itemNumber, month, day, year;
    float price;

    printf("Enter item number: ");
    scanf("%d",  &itemNumber);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit\tPurchase\n");
    printf("\tPrice\tDate\n");
    printf("%-d\t$ %4.2f\t%-d/%-d/%-d\n", itemNumber, price, month, day, year);
}
