#include <stdio.h>
int main() {
    int n;
    printf("Enter size in odd: ");
    scanf("%d", &n);
    int data[n][n];
    
    //take input
    for(int i=0;i<n;i++){
       for(int j=0; j<n;j++){
           printf("data[%d][%d]: ", i,j);
            scanf("%d",&data[i][j]);
       }
    }
    printf("\n");
    //print data
    for(int i=0;i<n;i++){
       for(int j=0; j<n;j++){
           printf("%d ", data[i][j]);
       }
       printf("\n");
    }
    
    // make sum
    int rSum=0, cSum=0;
    for(int i=0;i<n;i++){
         rSum+=data[n/2][i];
         cSum+=data[i][n/2];
    }
      printf("\nSummation of middle row = %d",rSum);
      printf("\nSummation of middle col = %d",cSum);

    return 0;
}
