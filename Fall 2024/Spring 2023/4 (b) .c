// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
       int f=0,s=1,n,size;
       printf("Enter N: ");
       scanf("%d",&size);
       
       printf("0 1 ");
       for(int i=3;i<=size;i++){
          n=f+s;
          printf("%d ",n);
          f=s;
          s=n;
    }
   return 0;
}
