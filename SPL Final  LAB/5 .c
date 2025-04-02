
#include <stdio.h>

int main() {
    
    float addition, substraction, multiplication, division, number_1,number_2,result;
    int choose;
    
    printf("Enter Number 1: ");
    scanf("%f",&number_1);
    printf("Enter Number 2: ");
    scanf("%f",&number_2);
    
    printf("\nOPERATION LIST.\n");
     printf("1. Addition. \n");
      printf("2. Substraction. \n");
       printf("3. Multiplication. \n");
       printf("4. Division.. \n");
       printf("Choose Operation...: ");
    scanf("%d",&choose);
    switch(choose){
       case 1:
             result=number_1+number_2;
             break;
       case 2:
             result=number_1-number_2;
             break; 
       case 3:
             result=number_1*number_2;
             break;
       case 4:
             result=number_1/number_2;
             break;
   }
   
   printf("\nResult is : %0.3f",result);
  
    return 0;
}
