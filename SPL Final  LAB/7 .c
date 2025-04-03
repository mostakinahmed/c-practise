

#include <stdio.h>

int main()
{
    // Write C code here
    int size,temp;
    printf("Enter array size: ");
    scanf("%d",&size);
    int data[size];
    // int data[7]={1,5,3,4,2,10,5};

    for(int i=0; i<size; i++) {
        printf("data[%d]: ",i);
        scanf("%d",&data[i]);
    }

    // print original data
    printf("\nOriginal data list: \n");
    for(int i=0; i<size; i++) {
        printf("%d ",data[i]);
    }

    //make data sorted from small to large value
    for(int i=0; i<size; i++) {
        for(int j=0; j<size-i-1; j++) {
            if(data[j]>data[j+1]) {
                temp=data[j+1];
                data[j+1]=data[j];
                data[j]=temp;
            }
        }
    }

    //print sorted data
    printf("\n\nSorted data list: \n");
    for(int i=0; i<size; i++) {
        printf("%d ",data[i]);
    }
    return 0;
}
