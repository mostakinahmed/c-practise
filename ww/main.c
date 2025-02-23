#include <stdio.h>
#include <stdlib.h>

int main()

{
    int n,count=0;
    printf("Enter num: ");
    scanf("%d",&n);
    do{
        count++;
        n=n/10;
    }
    while(n!=0);

    printf("%d\n",count);
   /*
    int n=2;
    //printf("Enter a num: ");
    //scanf("%d",&n);
    x:
    printf("X\n");
    switch(n) {

    case 1:
        printf("1\n");
        break;

    case 2:
        printf("2\n");
        break;
        if(n==2) {
            goto x;
        }
    case 3:
        printf("3\n");
        break;

    case 4:
        printf("4\n");
        break;

    default:
        printf("5.........\n");
        break;

    }  */
    return 0;
}
