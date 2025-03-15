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
    //simple output  
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf(" %d ",arr[i][j]);
      }
      printf("\n");
    }
    //summation of row and col
    printf("\nsummation row & column: \n");
    for(int i=0;i<n;i++){   //for row
        sum=0;
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
             sum=sum+arr[i][j];
        }
        printf(" -- %d ",sum);
        printf("\n");
      }
      
      for(int i=0;i<n;i++){   //for column
        sum2=0;
        for(int j=0;j<n;j++){
             sum2=sum2+arr[j][i];
        }
        printf("%d ",sum2);
      }
      
      printf("\n");
    return 0;
}
