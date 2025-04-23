// Online C compiler to run C program online
#include <stdio.h>

int fibSeries(int size);

int fibSeries(int size){
     int f=0,s=1,n;
     printf("0 1 ");
       for(int i=3;i<=size;i++){
          n=f+s;
          printf("%d ",n);
          f=s;
          s=n;
    }
}
int main() {
    // Write C code here
       int size;
       printf("Enter N: ");
       scanf("%d",&size);
       
       fibSeries(size);
       
   return 0;
}
