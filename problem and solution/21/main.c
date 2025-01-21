#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b,sum=1;
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i++){
        sum=sum*a;
    }
    printf("result of %d ^ %d = %d\n",a,b,sum);

    return 0;
}
