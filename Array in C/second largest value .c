#include <stdio.h>

void main() {
    int arr1[50], n, i, j = 0, lrg, lrg2nd;
    
    printf("Input the size of the array : ");
    scanf("%d", &n);

   //input
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    // Find the largest element in the array
    lrg = 0;
    for (i = 0; i < n; i++) {
        if (lrg < arr1[i]) {
            lrg = arr1[i];
        }
    }
    
    //second largest value
    int slrg=0;
    for (i = 0; i < n; i++) {
        if (lrg != arr1[i]) {
            if(slrg < arr1[i]){
                slrg = arr1[i];
            }
        }
    }

    // Display the second largest element
    printf("The Second largest element in the array is :  %d \n\n", slrg);
}
