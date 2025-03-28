
#include <stdio.h>

int main() {

    int size;
    printf("Enter array size: ");
    scanf("%d",&size);
    int data[size],revData[size];
    
    //input data 
     printf("Input data:\n");
    for(int i=0;i<size;i++){
            printf("data [%d] : ",i);
            scanf("%d",&data[i]);
    }
    
    //reverse the data && save in another array
    for(int i=0, j=size-1; i<size , j>=0; i++, j--) {
    revData[j]=data[i];
}

    //print original array
    printf("\n\nOriginal Array: \n");
    for(int i=0; i<size; i++) {
      printf("Data[%d]: %d \n",i,data[i]);
}

  //print Reverse array
    printf("\n\nReverse Array: \n");
    for(int i=0; i<size; i++) {
      printf("revData[%d]: %d \n",i,revData[i]);
}
    return 0;
}
