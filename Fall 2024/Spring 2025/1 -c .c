#include <stdio.h>

int main()
{
    char data1[200], data2[100];

    gets(data1);
    gets(data2);

    // find size of first data
    int size1 = 0;
    while (data1[size1] != '\0')
    {
        size1++;
    }

    //set space after 1st string
    data1[size1]=' ';


    // Concatenate manually
    int i = 0;
    while (data2[i] != '\0')
    {
        size1++;
        data1[size1] = data2[i];
        i++;
    }

    // find final size
    int finalSize = 0;
    while (data1[finalSize] != '\0')
    {
        finalSize++;
    }

    // Output
    printf("\n%s", data1);
    printf("\nSize of Final string: %d", finalSize);
    return 0;
}
