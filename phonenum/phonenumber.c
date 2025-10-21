#include <stdio.h>

int main(void) {
    int numRow1, numRow2, numRow3;

    printf("Enter phoner number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &numRow1, &numRow2, &numRow3);
    
    printf("You entered %d.%d.%d", numRow1, numRow2, numRow3);
}