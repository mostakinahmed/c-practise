// Online C compiler to run C program online
#include <stdio.h>

int swap(int *a, int *b){
     int temp;
    temp= *a;
    *a=*b;
    *b=temp;
}
int main() {

   int a=6,b=10;
    swap(&a,&b);
    printf("%d %d",a,b);

    return 0;
}
