#include <stdio.h>
#include <string.h>

int main() {
    char str_1 [100],str_2 [100],str_3 [100], result[100];



    //input three string
    printf("Enter first string: ");
    gets(str_1);

    printf("Enter first string: ");
    gets(str_2);

    printf("Enter first string: ");
    gets(str_3);

    //initilize result as an empty
    result[0]='\0';

    //concat three strings to one string
    strcat(result, str_1);
    strcat(result, str_2);
    strcat(result, str_3);

    //find length
    int len=strlen(result);
    printf("\nFinal data: %s\n",result);
     printf("Total length: %d\n",len);

    return 0;
}
