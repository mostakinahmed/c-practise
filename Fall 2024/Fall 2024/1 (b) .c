#include <stdio.h>

int main()
{
    char data1[200], data2[100];

    gets(data1);
    gets(data2);


    //find size of first data
    int size1 = 0;
    while (data1[size1] != '\0') {
        size1++;
    }

    //find size of second data
    int size2 = 0;
    while (data2[size2] != '\0') {
        size2++;
    }

    // Concatenate manually
    int i = 0;
    while (data2[i] != '\0') {
        data1[size1] = data2[i];
        size1++;
        i++;
    }

    //find final size
    int finalSize=0;
    while (data1[finalSize] != '\0') {
        finalSize++;
    }

    // Output
    printf("\n%s", data1);
    printf("\nSize of Final string: %d", finalSize);
    return 0;
}
