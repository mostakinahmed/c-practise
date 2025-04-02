#include <stdio.h>

int main() {
    int n;
    printf("Enter an array size: ");
    scanf("%d",&n);
    int data[n];
    
    //data input
    for(int i=0;i<n;i++){
        printf("data[%d]: ",i);
        scanf("%d",&data[i]);
    }
    
    //print original data
    printf("\nOriginal data list: \n");
    for(int i=0;i<n;i++){
        printf("%d ",data[i]);
    }
    //print odd data 
    printf("\nOdd data list: \n");
    for(int i=0;i<n;i++){
        if(data[i]%2!=0){
            printf("%d ",data[i]);
        }
    }

    return 0;
}
