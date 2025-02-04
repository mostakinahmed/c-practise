#include<stdio.h>
int main() {

    /* Read four integer values named A, B, C and D.
    Calculate and print the difference of product
    A and B by the product of C and D (A * B - C * D). */

    int A,B,C,D,result;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    result = (A*B)-(C*D);
    printf("DIFERENCA = %d\n",result);

    return 0;
}


