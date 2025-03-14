// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n,max,min;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[n];
    //take input
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //seet min & max value
    max=a[0];
    min=a[0];
    //cheak each element
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
        printf("max = %d\n",max);
        printf("min = %d",min);
    return 0;
}