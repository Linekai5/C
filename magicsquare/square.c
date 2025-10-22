#include <stdio.h>

int main(void) {
    int num1, num2, num3, num4, num5, num6, num7, num8,
     num9, num10, num11, num12, num13, num14, num15, num16, rowSum1, rowSum2, rowSum3, rowSum4, colSum1, colSum2, colSum3, colSum4, diasum1, diasum2;

     scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12, &num13, &num14, &num15, &num16);
     printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n",num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16);

     rowSum1 = num1 + num2 + num3 + num4;
     rowSum2 = num5 + num6 + num7 + num8;
     rowSum3 = num9 + num10 + num11 + num12;
     rowSum4 = num13 + num14 + num15 + num16;

     colSum1 = num1 + num5 + num8 + num13;
     colSum2 = num2 + num6 + num10 + num14;
     colSum3 = num3 + num7 + num11 + num15;
     colSum4 = num4 + num8 + num12 + num16;

     diasum1 = num13 + num10 + num7 + num4;
     diasum2 = num16 + num11 + num6 + num1;

     printf("Row sums: %d %d %d %d\n", rowSum1, rowSum2, rowSum3, rowSum4);
     printf("Colum sums: %d %d %d %d\n", colSum1, colSum2, colSum3, colSum4);
     printf("Diagonal sums: %d %d\n", diasum1, diasum2);
}