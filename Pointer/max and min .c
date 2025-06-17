#include <stdio.h>

int main()
{
    int data[100], n;
    int *ptr;
    ptr = data;
    printf("Enter Size: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("data[%d]: ", i);
        scanf("%d", &data[i]);
    }

    //max and min
    int max = *ptr;
    int min = *ptr;
    for (int i = 1; i < n; i++)
    {
        ptr++;
        // min
        if (*ptr < min)
        {
            min = *ptr;
        }
        // max
        if (*ptr > max)
        {
            max = *ptr;
        }
    }

    printf("max = %d\n", max);
    printf("min = %d", min);
    return 0;
}
