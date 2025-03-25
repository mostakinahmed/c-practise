
#include<stdio.h>
#include<string.h>
int main()
{
    char data[100], rev[100];

    //input  data
    printf("Enter string: ");
    gets(data);
    int len = strlen(data);
    //calculations
    //store in rev array
    for(int i=len-1,j=0; i>=0,j<len; i--,j++){
        rev[j]=data[i];
    }


    for(int i=0; i<len;i++){
        printf("%c ",rev[i]);
    }
    return 0;

}
