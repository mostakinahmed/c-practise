#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b,x,y,j,c,result=0;
    scanf("%d",&a);
    scanf("%d",&b);

    int min = (a < b) ? a : b;
    for(i=1;i<=min;i++){
        if(a%i==0 && b%i==0){
                result=i;

        }

    }
     printf("%d",result);


    /*printf("\n");

    for(j=1;j<=b;j++){
        y=b%j;
        if(y==0){
           printf("%d\n",j);
        }
    } */
    return 0;
}
