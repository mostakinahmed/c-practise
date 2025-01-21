#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b,sum=1;
    scanf("%d",&a);
    for(i=a;i>=1;i--){
        sum=sum*i;
    }
    printf("%d! = %d",a,sum);
    return 0;
}
