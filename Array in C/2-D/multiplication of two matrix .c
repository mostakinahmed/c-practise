#include <stdio.h>

int main() {
    int n,sum=0;
    printf("Enter array dimension (ex:if 3x3 = 3): ");
    scanf("%d",&n);
    int A[n][n],B[n][n],C[n][n];
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

    //multiplication of this matrix
     printf("\n");
    printf("multiplication of matrix A & B: \n");
    for (int i = 0; i < n; i++) { // Row of first matrix
            for (int j = 0; j < n; j++) { // Column of second matrix
                sum = 0;
                for (int k = 0; k < n; k++)
                    sum = sum + A[i][k] * B[k][j];
                C[i][j] = sum;
            }
        }
        
        //print new matrix
        for (int i = 0; i < n; i++) {
            printf("\n");
            for (int j = 0; j < n; j++)
                printf("%d\t", C[i][j]);
        }

    return 0;
}
