#include <stdio.h>

// additional function
void atmData(int balance, int amount)
{
    int remBalance;

    // cheak first condition
    if (amount % 500 == 0 || amount % 1000 == 0)
    {
        // cheak 2nd condition
        if (balance >= amount)
        {
            remBalance = balance - amount;
            printf("\nTransaction Approved\n");
            printf("Remaining Balance = %d\n", remBalance);
        }
    }

    else
    {
        printf("Transection Not Approved.");
    }
}

int main()
{
    int balance, amount;
    printf("Enter account balance: ");
    scanf("%d", &balance);
    printf("Enter withdrawal amount: ");
    scanf("%d", &amount);

    // call function and pass two variable
    atmData(balance, amount); // using call by value
    return 0;
}
