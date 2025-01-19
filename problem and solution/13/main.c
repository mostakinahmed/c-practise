#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,n,i,tempData;
    int *p1,*p2;
    printf("Enter num: ");
    scanf("%d %d",&a,&b);
    p1=a;
    p2=b;

    tempData=p1;
    p1=p2;
    p2=tempData;

    printf("%d %d\n%d %d",a,b,p1,p2);
    return 0;
}
