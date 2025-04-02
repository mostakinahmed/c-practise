#include <stdio.h>

int main() {
  
    int data[3][3];
    //data input
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("data[%d][%d]: ",i,j);
            scanf("%d",&data[i][j]);
       }
    }
    
    //print 3x3 matrix data
    printf("\nMatrix data: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",data[i][j]);
       }
       printf("\n");
    }

    return 0;
}
