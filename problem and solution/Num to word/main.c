#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n,rem=0,rem2=0,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,y,x,rev=0,count=0,sum=1;
    printf("Enter Digit: ");
    scanf("%lld",&n);

    while(n>0){
        rem=n%10;
        n=n/10;
        rev=(rev*10)+rem;
    }

    while(rev>0){
        rem2=rev%10;
        rev=rev/10;

      switch(rem2){
        case 0:
            printf("Zero ");
            break;
        case 1:
            a++;
            break;

        case 2:
            b++;
            break;

        case 3:
            c++;
            break;

        case 4:
            d++;
            break;
        case 5:
            e++;
            break;
        case 6:
            f++;
            break;
        case 7:
            g++;
            break;
        case 8:
            h++;
            break;
        default:
            i++;
            break;
        }

    }
    printf("1 = %lld\n",a);
    printf("2 = %lld\n",b);
    printf("3 = %lld\n",c);
    printf("4 = %lld\n",d);
    printf("5 = %lld\n",e);
    printf("6 = %lld\n",f);
    printf("7 = %lld\n",g);
    printf("8 = %lld\n",h);
    printf("9 = %lld\n",i);



    return 0;
}
