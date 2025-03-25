
#include<stdio.h>
#include<string.h>
int main()
{
    char data[100],count=1;

    //input  data
    printf("Enter string: ");
    gets(data);
    int len = strlen(data);

    //calculations
    for(int i=0;i<len;i++){
        if(data[i]==' '){
            count++;
        }
    }
    printf("Total word: %d",count);

    return 0;

}
