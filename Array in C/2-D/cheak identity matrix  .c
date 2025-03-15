#include <stdio.h>

int main() {
    // Write C code here
    int n,x,zero=0,bCount=0,count=0;
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
     
         
    //new problem:
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j && a[i][j]==1){
                count++; //count total 1
            }
            else if(i>j || i<j){
                if(a[i][j] == 0){
                    bCount++; //count total zero
                }
            }
        }
    }
    
    if(count==n && bCount == (n*n)-n){
        printf("Identity");
    }
    else{
        printf("Not Identity");
    }
    return 0;
}
