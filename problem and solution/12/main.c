#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n,modu,res,count=0;
    printf("Enter num: ");
    scanf("%lld",&n);
    modu= n%10;
    do{

       n= n/10;
    }while(n>9);

    printf("sum = %lld",n+modu);
    return 0;
}
