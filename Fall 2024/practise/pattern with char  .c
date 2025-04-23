
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char x='A';
    for(int i=1;i<=5;i++){
        
        //gap
        for(int g=5;g>i;g--){
            printf("  ");
        }
        
        //col data
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
       
       //char print
        for(int k=i-1;k>0;k--){
            printf("%c ",x++);
        }
        x='A';
         printf("\n");
    }
    return 0;
}
