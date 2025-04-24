// Online C compiler to run C program online
#include <stdio.h>

int swap(int arr[]){
    int max=arr[0],min=arr[0];
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        
        if(min>arr[i]){
            min=arr[i];
        }
   }
     printf("max = %d min = %d",max,min);
}

int main() {

   int arr[5],max,min;
   for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
   }
   
   swap(arr);
  
    return 0;
}
