// Online C compiler to run C program online
#include <stdio.h>


int main() {
    // Write C code here
       int data[3][3];
       
       //take input
       for(int i=0;i<3;i++){
           for(int j=0;j<3;j++){
               printf("data[%d][%d] : ",i,j);
               scanf("%d",&data[i][j]);
           }
       }
       
       //print matrix
       for(int i=0;i<3;i++){
           for(int j=0;j<3;j++){
               printf("%d ",data[i][j]);
           }
           printf("\n");
       }
       
       //replace even with 0 and odd with 1
        for(int i=0;i<3;i++){
           for(int j=0;j<3;j++){
              if(data[i][j]%2==0){
                  data[i][j]=0;
              }
              else{
                   data[i][j]=1;
              }
           } 
       }
    
       printf("\n");
            //print new matrix
       for(int i=0;i<3;i++){
           for(int j=0;j<3;j++){
               printf("%d ",data[i][j]);
           }
           printf("\n");
       }
   return 0;
}
