#include <stdio.h>

//QN: Find out if the input is an alphabet using conditional operator

int main()
{
    char x;
    printf("Enter Character: ");
    scanf("%c", &x);
    ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
    ?  printf("%c is an alphabet.\n", x)
    :  printf("%c is not an alphabet.\n", x);
    return 0;
}


