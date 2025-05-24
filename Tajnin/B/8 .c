#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a String: ");
    gets(str);

    int size = strlen(str);
    if (str[0] == str[size-1]) {
        printf("'Yes', The String starts and ends with same character = '%c'.\n", str[0]);
    } else {
        printf("'No', The String starts with '%c' and ends with '%c'.\n", str[0], str[size-1]);
    }
    return 0;
}
