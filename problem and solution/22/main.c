#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b,sum=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        b=a%i;
        if(b==0){
           printf("%d\n",i);
        }
    }
    return 0;
}
