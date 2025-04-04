#include <stdio.h>
//create user defined function
int primeNum(int result)
{
    int num, i, j, flag=0, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // find all number upto N
    for (j = 2; j <= num; ++j) {
        flag = 0; // Reset flag for each number
        // Check j is divisible by i or not
        for (i = 2; i<=j/2 ; ++i) {
            if (j % i == 0) {
                flag = 1;
                break;
            }
        }
        // Prime number found, if flag=0
        if (flag == 0) {
            sum += j;  // Add to sum
        }
    }
    return sum;
}
//main function start from here
int main()
{
    int sum,result=0;
    //call primeNumber function and pass arguments 0 for getting result
    sum = primeNum(result);
    // Print the sum of primes
    printf("\nSum of primes = %d\n", sum);
    return 0;
}
