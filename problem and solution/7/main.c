#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,n,i=1,sum=0;
    printf("Enter Num = ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
           if(i%2==0){
            sum=sum+i;
           }
    }
    printf("%d",sum);

    return 0;
}
