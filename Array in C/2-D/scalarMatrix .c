#include <stdio.h>

int main() {
    // Write C code here
    int n,x;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[n][n],b[n][n],sum[n][n];
    
    //take input matrix A
    printf("Matrix A:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("A[%d][%d] : ",i,j);
             scanf("%d",&a[i][j]);
        }
    }
    
    
    //print matrix A
    printf("\nMatrix A:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             printf("%d ",a[i][j]);
        }
       printf("\n");
    }
      printf("\n");
  
  //input constant value
   printf("Enter scaler value : ");
    scanf("%d",&x);
    
    //new problem:
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          b[i][j]=x*a[i][j];
        }
    }
    //print data
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             printf("%d ",b[i][j]);
        }
       printf("\n");
    }
    
    
    return 0;
}
