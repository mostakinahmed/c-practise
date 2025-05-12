// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int arr[5]={1,2,3,4,5};
    int n=4;
    for(int i=0;i<5;i++){
     printf("%d ",arr[i]); 
    }
    for(int i=0;i<5/2;i++){
        int temp;
        temp=arr[i];
        arr[i]=arr[n];
        arr[n]=temp ;
        n--;
     
    }
     printf("\n "); 
     for(int i=0;i<5;i++){
     printf("%d ",arr[i]); 
     
    }
    
    


    return 0;
}
