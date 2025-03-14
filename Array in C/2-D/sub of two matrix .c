#include <stdio.h>

int main() {
    int n;
    printf("Enter array dimension (ex:if 3x3 = 3): ");
    scanf("%d",&n);
    int A[n][n],B[n][n];
    //1st matrix -input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
      }
    }
     printf("\n");
    //2nd matrix -input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
      }
    }
     printf("\n");
     //print matrix A
      printf("\n");
      printf("Matrix A:\n");
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",A[i][j]);
      }
      printf("\n");
    }
    
    //matrix B print
       printf("\n");
       printf("Matrix B:\n");
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",B[i][j]);
      }
      printf("\n");
    }

    //substraction in the matrix
     printf("\n");
    printf("Summation of matrix A & B: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf(" %d ",A[i][j]-B[i][j]);
      }
      printf("\n");
    }
   

    return 0;
}
