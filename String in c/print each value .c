
#include<stdio.h>
#include<string.h>
int main()
{
    char data[100];

    //input  data
    printf("Enter string: ");
    gets(data);
    //calculations
    int i=0;
    while(data[i]!='\0') {

        printf("%c ",data[i]);
        i++;
    }
    return 0;

}
