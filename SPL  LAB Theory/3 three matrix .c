
#include <stdio.h>

int main() {

    int data[3][3],sValue,count=0,x,y;
    
    //input data for 3x3 matrix
     printf("Input data:\n");
    for(int i=0;i<3;i++){
           for(int j=0;j<3;j++){
                printf("data [%d] [%d] : ",i,j);
                scanf("%d",&data[i][j]);
        }  
    }
    
    //print  this matrix 
    printf("\n");
    printf("The matrix is: \n");
    for(int i=0;i<3;i++){
           for(int j=0;j<3;j++){
                printf("%d ",data[i][j]);
        }
        printf("\n");
    }
    printf("\n");
   //Asks the user to provide a value to search within the matrix.
     printf("\n\nProvide a searching value: \n");
     scanf("%d",&sValue);
     
     //search this value from data array
    for(int i=0;i<3;i++){
           for(int j=0;j<3;j++){
                if(sValue==data[i][j]){
                    count++;
                    x=i;
                    y=j;
                    break;
                }
        }  
    }
      printf("\n");
    
    //print data location if data is found
    if(count!=0){
        printf("Data %d Found in Row = %d && Column = %d",data[x][y],x+1,y+1);
    }
    
    //print message if data not found
    else if(count==0){
        printf("The value is not present in the matrix");
    }
   
    return 0;
}
