#include <stdio.h>

int main() {
    int arr[3][3],n[3][3];
    //simple input 3x3
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
      }
      printf("\n");
    }
    //simple output  3x3
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %d ",arr[i][j]);
      }
      printf("\n");
    }
    
    //make transpose this 
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           n[j][i] =arr[i][j];
      }
      printf("\n");
    }
    
    //printing new transpose matrix
     printf("Transpose matrix: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           printf(" %d ",n[i][j]);
      }
      printf("\n");
    }
    return 0;
}
