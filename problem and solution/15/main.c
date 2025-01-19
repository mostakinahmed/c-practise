#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n,modu,rem,sum=1;
    printf("Enter num: ");
    scanf("%lld",&n);


    do{
       rem= n%10;
       sum=sum*rem;
       n=n/10;

    }while(n>10);
    sum=sum*n;
    printf("sum = %lld",sum);
    return 0;
}
