#include <stdio.h>
void delData(int arr[],int **size,int delValue,int pos);
void updateArray(int arr[], int *size, int delValue1,int delValue2);


void delData(int arr[],int **size,int delValue,int pos){
          for (int j = pos; j < **size-1; j++) {
                arr[j] = arr[j + 1];
            }
            (**size)--; // Decrement size
}

void updateArray(int arr[], int *size, int delValue1,int delValue2) {
    int delValue,pos;
    int found=*size;
    for (int i = 0; i < *size; ) {
        if (arr[i] == delValue1) {
            delValue=delValue1;
            pos=i;
            delData(arr,&size,delValue,pos);
        }
        
        else if(arr[i] == delValue2){
            delValue=delValue2;
            pos=i;
            delData(arr,&size,delValue,pos);
        }
        
        else{
            i++;
        }
}

if(found==*size){
    printf("\nThis element can not be deleted as it is not exist.\n");
}
}


int main() {
    int size;
    printf("Enter Size: ");
    scanf("%d", &size);
    int arr[size], delValue1,delValue2;

    // Take input
    for (int i = 0; i < size; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter delete value: ");
    scanf("%d %d", &delValue1,&delValue2);

    updateArray(arr, &size, delValue1,delValue2);
    //print new array
    printf("\nUpdated array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
