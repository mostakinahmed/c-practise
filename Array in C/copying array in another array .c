
#include <stdio.h>

int main() {
// Declare another array of the same size

    int n;
    printf("Enter Size: ");
    scanf("%d",&n);
    int arr[n],arr2[n];
    
    //take input
      for (int i = 0; i < n; i++) {
          printf("A[%d] = ",i);
       scanf("%d",&arr[i]);
    }

    // Copy elements from arr1 to arr2
    for (int i = 0; i < n; i++) {
        arr2[i] = arr[i];
    }

    printf("Previous array: \n");
    for (int i = 0; i < n; i++) {
        printf("A[%d] = %d\n",i,arr[i]);
    }
    // Print copied array
    printf("Copied array: \n");
    for (int i = 0; i < n; i++) {
         printf("B[%d] = %d\n",i,arr2[i]);
       
    }

    return 0;
}
