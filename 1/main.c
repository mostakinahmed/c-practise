#include <stdio.h>

int main()
{

    // QSN: Find out the largest between three numbers using conditional operator.
    int x,y,z,max;
    printf("X = ");
    scanf("%d",&x);
    printf("Y = ",y);
    scanf("%d",&y);
    printf("Z = ",z);
    scanf("%d",&z);

    max = (x > y && x > z) ? x : (y > z ? y : z);
    printf("Max value = %d\n\n",max);
    return 0;
}
