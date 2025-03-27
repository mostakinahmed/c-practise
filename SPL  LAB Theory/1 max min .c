#include <stdio.h>

int main() {
    
    int size;
    printf("Enter array size: ");
    scanf("%d",&size);
    
    int data[size],max,min;
    //input array elements
    for (int i = 0;i<size ; i++){
          printf("A[%d]: ",i);
          scanf("%d",&data[i]);
    }
    
    //find max and min elements from array
    max=data[0];
    min=data[0];
    for (int i = 0;i<size ; i++){
        //cheak maximum value
         if(max<data[i]){
             max=data[i];
         }  
         
         //cheak min value
         if(min>data[i]){
             min=data[i];
         }
    }
    
    // Print the max and min value
    printf("Max value = %d\nMin value = %d", max,min);
    return 0;
}
