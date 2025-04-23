// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char ch='A';
    int data[5][5];
    for(int i=0;i<5;i++){
        
        //gap
        for(int g=1;g<=i;g++){
              printf("  ");
        }
        
        //main data
        for(int j=1;j<=5-i;j++){
              printf("%c ",ch++);
        }
        ch='A';
        printf("\n");
    }
  

    return 0;
}
