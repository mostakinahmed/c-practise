#include <stdio.h>

int main()
{
    int data[100], n, temp;
    int *ptr = data;
    printf("Enter Size: ");
    scanf("%d", &n);

    int *last = &data[n - 1];
    int *first = data;

    for (int i = 0; i < n; i++)
    {
        printf("data[%d]: ", i);
        scanf("%d", &data[i]);
    }

    int i = 0;
    while (i < n / 2) // mid value always same
    {
        temp = *first;
        *first = *last;
        *last = temp;
        i++;
        first++;
        last--;
    }

    printf("Reversed:\n");
    for (int i = 0; i < n; i++)
    {
        printf("data[%d]: %d\n", i, *ptr);
        ptr++;
    }

    return 0;
}
