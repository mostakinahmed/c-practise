#include <stdio.h>
#include <stdbool.h>

int isPrime(int n)
{
    if (n == 0 || n == 1)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }

    // prime cheak
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return false; // if not prime
            break;
        }
    }
    //if prime
    return true;
}

int main()
{

    int n, result;
    printf("\nEnter a num : ");
    scanf("%d", &n);

    // call function and pass n.
    // function return the result & store it into result variable ( true = 1, false = 0 )
    result = isPrime(n);
    if (result == 1)
    {
        printf("Prime");
    }
    else if (result == 0)
    {
        printf("Not Prime");
    }

    // if (isPrime(n) == 1)
    // {
    //     printf("Prime");
    // }
    // else if (isPrime(n) == 0)
    // {
    //     printf("Not Prime");
    // }

    return 0;
}
