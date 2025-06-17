#include <stdio.h>

int findSum(int *ptr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    return sum;
}

// average
int findAvg(int *ptr, int n)
{
    int sum = 0, avg;
    for (int i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    avg = sum / n;
    return avg;
}

// operate func
operate(int *ptr, int n, int (*funcOperation)(int *, int))
{
    int res = funcOperation(ptr, n);
    printf("Result  = %d", res);
}

// main function
int main()
{
    int n, sum, ch;
    int data[100];
    int *ptr;
    ptr = data;
    printf("Enter size: "); // array size
    scanf("%d", &n);

    // input data
    for (int i = 0; i < n; i++)
    {
        printf("data[%d]: ", i);
        scanf("%d", ptr);
        ptr++;
    }

    printf("\nOption List: \n1. Sum \n2. Average \nChoose.....:");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        operate(data, n, findSum);
        break;
    case 2:
        operate(data, n, findAvg);
        break;
    default:
        printf("Invalid Option.");
        break;
    }

    return 0;
}
