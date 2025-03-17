#include <stdio.h>

int main() {
// Declare another array of the same size

    int n;
    printf("Enter Size: ");
    scanf("%d",&n);
    int j=0,k=0;
    int arr[n],arr2[n],even[n],odd[n];
    
    //take input
      for (int i = 0; i < n; i++) {
          printf("A[%d] = ",i);
       scanf("%d",&arr[i]);
    }

    //print array
    printf("This array is : \n");
    for (int i = 0; i < n; i++) {
        printf("A[%d] = %d\n",i,arr[i]);
    }
    
    //cheak even & odd
      for (int i = 0; i < n; i++) {
        if(arr[i]%2==0){
            even[j]=arr[i];
            j++;
        }
        
        else{
              odd[k]=arr[i];
            k++;
        }
    }


   //int size=sizeof(even)/sizeof(even[0]);
    // Print copied array
    printf("Even  array: \n");
    for (int i = 0; i < j; i++) {
         printf("Even[%d] = %d\n",i,even[i]);
       
    }
    
    //int size2=sizeof(odd)/sizeof(odd[0]);
     printf("Odd  array: \n");
    for (int i = 0; i < k; i++) {
         printf("Odd[%d] = %d\n",i,odd[i]);
       
    }

    return 0;
}
