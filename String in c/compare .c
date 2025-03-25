
#include<stdio.h>
#include<string.h>
int main()
{
    char data1[100],data2[100],flag=0;

    //input  data
    printf("Enter string 1: ");
    gets(data1);
    printf("Enter string 2: ");
    gets(data2);
    int len1 = strlen(data1);
    int len2 = strlen(data2);

    if(len1==len2){
        for(int i=0;i<len1;i++){
            if(data1[i]==data2[i]){
                ++flag;
            }
            else{
                printf("Not Equal");
                break;
            }
        }

        if(flag==len1){
            printf("Equal");
        }
    }
    else{
        printf("Not equal");
    }

    return 0;

}
