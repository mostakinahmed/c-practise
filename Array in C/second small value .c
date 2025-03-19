#include <stdio.h>

void main() {
    int arr1[50], n, i, sml, sSml;
    
    printf("Input the size of the array : ");
    scanf("%d", &n);

   //input
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    // Find the largest element in the array
    //sml = 0;
    int min=arr1[0];
    for (i = 0; i < n; i++) {
        if (min > arr1[i]) {
            min = arr1[i];
        }
    }
    
    //second largest value
    //sSml=0;
    
   int  min2=arr1[0];
    for (i = 1; i < n; i++) {
        if (min != arr1[i]) {
            if(min2 > arr1[i]){
                min2 = arr1[i];
            }
        }
    }

    // Display the second largest element
    printf("The Second Smallest element in the array is :  %d \n\n", min2);
}
