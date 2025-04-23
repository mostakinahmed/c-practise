#include <stdio.h>
#include <string.h>
int main() {
  
   int n;
   printf("\nEnter a string : ");
   scanf("%d",&n);
   int data[n],even[n],odd[n];
   for(int i=0;i<n;i++){
       printf("data[%d]: ",i);
       scanf("%d",&data[i]);
   }
    for(int i=0;i<n;i++){
      printf("%d ",data[i]);
       }
   //separate even odd
   int j=0,k=0;
     for(int i=0;i<n;i++){
       if(data[i]%2==0){
           even[j]=data[i];
           j++;
       }
       else{
            odd[k]=data[i];
            k++;
       }
   } 
  
   printf("\neven :\n");
   //print even
        for(int i=0;i<j;i++){
            printf("%d ",even[i]);
       }
         printf("odd :\n");
       //print odd
         for(int i=0;i<k;i++){
            printf("%d ",odd[i]);
       }
   
   
   return 0;
}
