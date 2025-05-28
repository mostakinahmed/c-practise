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

    for (int i = 0; i < n; i++)
    {
        printf("data[%d] Address: %u = Value: %d\n", i, &data[i], data[i]);
    }

    return 0;
}
