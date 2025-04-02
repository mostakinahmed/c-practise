// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    float final_bonus, total_sale,computer_price, commissions,final_commissions,gross_sallary;
    int computer_quantity,bonus,minimum_sallary;
    
    printf("Enter number of computer: ");
    scanf("%d",&computer_quantity);
    printf("Enter price of each computer: ");
     scanf("%f",&computer_price);
     
     commissions=0.02;
     bonus=200;
     minimum_sallary=1500;
     
     total_sale=computer_quantity*computer_price;
     final_commissions=total_sale*commissions;
     final_bonus=computer_quantity*bonus;
     gross_sallary=final_commissions+final_bonus+minimum_sallary;
     
    printf("Gross Sallary : %0.3f",gross_sallary);

    return 0;
}
