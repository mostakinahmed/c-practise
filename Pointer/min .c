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

    int min = *ptr;
    for (int i = 1; i < n; i++)
    {
        ptr++;
        if (*ptr < min)
        {
            min = *ptr;
        }
    }
    printf("min = %d", min);
    return 0;
}
