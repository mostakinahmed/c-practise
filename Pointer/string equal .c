#include <stdio.h>

int main()
{
    char data1[20], data2[20], ch;
    char *ptr1 = data1;
    char *ptr2 = data2;
    int count = 0, size1 = 0, size2 = 0;
    printf("Enter String 1: ");
    gets(data1);
    printf("Enter String 2: ");
    gets(data2);

    int j = 0;
    while (data1[j] != '\0')
    {
        size1++;
        j++;
    }
    int k = 0;
    while (data2[k] != '\0')
    {
        size2++;
        k++;
    }

    if (size1 == size2)
    {
        int i = 0;
        while (i < size1)
        {
            if (*ptr1 == *ptr2)
            {
                count++;
            }
            ptr1++;
            ptr2++;
            i++;
        }

        if (count == size1)
        {
            printf("Equal");
        }
        else
        {
            printf("Not Equal");
        }
    }
    else
    {
        printf("size not equal");
    }
    return 0;
}
