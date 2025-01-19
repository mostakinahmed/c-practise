#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n,modu,rem,temp=0;
    printf("Enter num: ");
    scanf("%lld",&n);

    do{
       rem= n%10;
       n=n/10;

       temp=(temp*10)+rem;

    }while(n!=0);

    printf("%lld",temp);


/*
    do{
       rem= n%10;
       n=n/10;
       printf("%lld",rem);


    }while(n>9);
    printf("%lld",n);

    */
    return 0;
}
