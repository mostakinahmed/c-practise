#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b,x,y,j,c,result=0;
    scanf("%d",&a);
    scanf("%d",&b);

    //int min = (a < b) ? a : b;
    for(i=1; ;i++){
        x=i*a;
        y=i*b;

        if(x==y){

        result=x;
        break;

        }


    }
    printf("result is %d\n",result);





    return 0;
}
