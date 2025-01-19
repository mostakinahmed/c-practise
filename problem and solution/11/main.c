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
    }while(n>10);

    printf("First digit = %lld\nSecond Digit = %lld",n,modu);
    return 0;
}
