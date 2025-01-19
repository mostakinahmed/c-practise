#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n,modu,num,rem,temp=0;
    printf("Enter num: ");
    scanf("%lld",&n);

    num=n;
    do{
       rem= n%10;
       n=n/10;

       temp=(temp*10)+rem;

    }while(n!=0);

    printf("%lld\n",temp);

    if(num==temp){
         printf("palindrome");
    }
    else{
        printf("not palindrome");
    }

    return 0;
}
