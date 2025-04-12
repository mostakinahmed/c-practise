#include <stdio.h>
#include <string.h>


void main() {
    int n;
    printf("Enter size: ");
    scanf("%d",&n);
    int data[n][n];
    
    //input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        printf("A[%d][%d] : ",i,j);
        scanf("%d",&data[i][j]);
      }
    }
    
    
    printf("\n");
    //print matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        printf("%d ",data[i][j]);
      }
      printf("\n");
    }
    
    
    printf("\n");
    //print sum
    int rSum=0;
    int cSum=0;
    for(int i=0;i<n;i++){
        rSum= rSum+data[i][n/2];
        cSum=cSum+data[n/2][i];
        
      }
      printf("\n");
       printf("Row = %d",rSum);
       printf("Col = %d",cSum);
    }
    

   
