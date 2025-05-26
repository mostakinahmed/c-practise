#include <stdio.h>

void updateArray(int arr[], int *size, int delValue) {
    int size_2=*size;
    for (int i = 0; i < *size; ) {
        if (arr[i] == delValue) {
            for (int j = i; j < *size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            (*size)--; // Decrement size
           } 
           
         else {
             i++;
         }
    }
    if(*size==size_2){
        printf("No data found to delete");
    }
}


int main() {
    int size;
    printf("Enter Size: ");
    scanf("%d", &size);
    int arr[size], delValue;

    // Take input
    for (int i = 0; i < size; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter delete value: ");
    scanf("%d", &delValue);

    updateArray(arr, &size, delValue);
    //print new array
    printf("\nUpdated array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
