// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

int main() {
    // Write C code here
    char data[100],fHalf[50],sHalf[50],final[100];
    int x=0;
    scanf("%s",data);
    
    int len=strlen(data);
    //find second half
    for(int i=len/2;i<len;i++){
        sHalf[x]=data[i];
        x++; //manage index for sHalf
    }
    
    //concate second half with main string
    strcat(sHalf,data);
 
    if(strcmp(sHalf,data) <0){
        printf("%s",sHalf);
    }
    else{
        printf("%s",data);
    }
    return 0;
}
