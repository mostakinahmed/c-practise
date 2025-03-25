
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
    for(int i=len-1; i>=0; i--){
        printf("%c ",data[i]);
    }

    return 0;

}
