
#include<stdio.h>
#include<string.h>
int main()
{
    char data[100];

    //input  data
    printf("Enter string: ");
    gets(data);
    //fgets(data, sizeof data, stdin);
    //calculations
    int i=0;
    while(data[i]!='\0') {

        printf("%d ,%c\n",i,data[i]);
        i++;
    }
    printf("The string length: %d",i);
    return 0;

}
