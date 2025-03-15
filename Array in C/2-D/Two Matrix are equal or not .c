#include <stdio.h>

int main() {
    // Write C code here
    int n,x,zero=0,nonZero=0,count=0;
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
    
    
    //take input matrix B
    printf("Matrix A:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("A[%d][%d] : ",i,j);
             scanf("%d",&b[i][j]);
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
      
      //print matrix B
    printf("\nMatrix B:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             printf("%d ",b[i][j]);
        }
       printf("\n");
    }
      printf("\n");
  
   
         
    //new problem:
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==b[i][j]){
                count++;
            }
        }
    }
    
    if(count==(n*n)){
        printf("Equal");
    }
    else{
        printf("Not Equal");
    }
    return 0;
}
