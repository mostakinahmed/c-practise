#include <stdio.h>

int main()
{
    /*A computer manufacturing company has the following monthly
    compensation policy to the sales-person: Minimum base salary: 1500.00, Bonus for every computer sold: 200.00
    Commission on the total monthly sales: 2%. Write a program to calculate the gross salary for a sales person.
    You will take input the price of each computer and the number of sold during the month. */

    int minSalary = 1500,numOfSold;
    float commision,total_sold,bonus,computerPrice;

    printf("Enter computer price : ");
    scanf("%f",&computerPrice);
    printf("Enter number of computer : ");
    scanf("%d",&numOfSold);

    bonus = numOfSold*200;
    commision = (computerPrice*numOfSold)*0.02;
    float gross_salary = minSalary + bonus + commision;

    printf("Total Salary: %.2f\n", gross_salary);

    return 0;
}
