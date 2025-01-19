#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,rem=0,rem2=0,y,x,rev=0,count=0,sum=1;
    printf("Enter Digit: ");
    scanf("%d",&n);

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
            printf("One ");
            break;

        case 2:
            printf("Two ");
            break;

        case 3:
            printf("Three ");
            break;

        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        default:
            printf("Nine ");
            break;
        }

    }



    return 0;
}
