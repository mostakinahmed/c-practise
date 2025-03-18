// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a[6] = {2,19, 10, 8, 17, 9};
    int b[6];
    
    b[0]=a[0];
    //make a new array
    for(int i=1;i<6;i++){
        b[i]=a[i]+b[i-1];
    }
    
    //print A
    for(int i=0;i<6;i++){
        printf("%d ",a[i]);
    }
    
    printf("\n");
    printf("\n");
    
    //print second array
    for(int i=0;i<6;i++){
        printf("%d ",b[i]);
    }
    return 0;
}
