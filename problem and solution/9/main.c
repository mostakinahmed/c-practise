#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,n,i=1,result;
    printf("Enter Num = ");
    scanf("%d",&n);

    for(i=1;i<=10;i++){
           result=n*i;
           printf("%d x %d = %d\n",n,i,result);
    }


    return 0;
}
