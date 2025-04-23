// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   
   int a[2][2],b[2][2],res[2][2];
   printf("Take A:\n");
   for(int i=0;i<2;i++){
       for(int j=0;j<2;j++){
           scanf("%d",&a[i][j]);
       }
   }
   printf("Take B:\n");
    for(int i=0;i<2;i++){
       for(int j=0;j<2;j++){
           scanf("%d",&b[i][j]);
       }
   }
   
   //sum
   for(int i=0;i<2;i++){
       for(int j=0;j<2;j++){
           res[i][j]=a[i][j]+b[i][j];
       }
   }
   
      printf("SUm:\n");
   for(int i=0;i<2;i++){
       for(int j=0;j<2;j++){
           printf("%d ",res[i][j]);
       }
          printf("\n");
   }

    return 0;
}
