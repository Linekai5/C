#include <stdio.h>

int main(void) {
    int gs1, groupId, publishCode, itemNum, checkDigit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &groupId, &publishCode, &itemNum, &checkDigit);
    printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", gs1, groupId, publishCode, itemNum, checkDigit);
}