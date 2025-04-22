#include <stdio.h>
int main() {

     int data[3][4];
     
    //take input
    for(int i=0;i<3;i++){
       for(int j=0; j<4;j++){
           printf("data[%d][%d]: ", i,j);
            scanf("%d",&data[i][j]);
       }
    }
    printf("\n");
    //print data
    for(int i=0;i<3;i++){
       for(int j=0; j<4;j++){
           printf("%d ", data[i][j]);
       }
       printf("\n");
    }
    
    // make calculation
    int pSum=0, cSum=0,hSum=0,sSum=0 ;
    for(int i=0;i<3;i++){
        pSum+=data[i][0];
        cSum+=data[i][1]; 
        hSum+=data[i][2]; 
        sSum+=data[i][3]; 
    }
      printf("\nsum of pen = %d",pSum);
      printf("\nsum of cap = %d",cSum);
      printf("\nsum of hat = %d",hSum);
      printf("\nsum of snacks = %d",sSum);

    return 0;
}
