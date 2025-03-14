#include <stdio.h>

int main() {
    // Write C code here
    int n,count=0;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    
    //take input array value from user
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    //cheaking dublicate
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }
       }
    }
    printf("%d\n",count);
    return 0;
}
