#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=5,b=10,temp;
    int *x=a,*y=b;
    temp=x;
    x=y;
    y=temp;
    printf("A= %d\nB= %d",x,y);
    printf("\nPointer\n");
    return 0;
}
