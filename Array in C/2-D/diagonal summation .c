#include <stdio.h>

int main() {
    int sum=0,sum2=0,n;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n][n],newArr[n][n];
    //simple input 3x3
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
      }
      printf("\n");
    }
    //simple output  3x3
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf(" %d ",arr[i][j]);
      }
      printf("\n");
    }
    
    //find left diagonal elements 
    printf("\nLeft diagonal summation: ");
    for(int i=0;i<n;i++){
            sum=sum+arr[i][i];
      }
      printf(" %d ",sum);
      printf("\n");
      
     //find right diagonal elements  
    printf("\nRight diagonal summation: ");
    for(int i=0,j=n-1;i<n,j>=0;i++,j--){
            sum2=sum2+arr[i][j];
      }
      printf(" %d ",sum2);
      printf("\n");
    
    
    
    return 0;
}
