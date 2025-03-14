#include <stdio.h>

int main() {
    // Write C code here
    int n,count;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    
    //take input array value from user
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    //cheaking dublicate
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
       }
       if(count==1){
           printf("%d\n",arr[i]);
       }
    }
    return 0;
}
