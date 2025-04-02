
#include <stdio.h>

int main() {
    

    int fact=1, number;
    
    printf("Enter Factorial Number: ");
    scanf("%d",&number);
    
    if(number<0){
        printf("\nFactorial is not posible for negative value.");
    }
    else if(number==0 || number==1){
        printf("\nFactiorial of %d is : %d",number,fact);
    }
      else{
          for(int i=1;i<=number;i++){
             fact=fact*i;
         }
         printf("\nFactiorial of %d is : %d",number,fact);
      }
 
  
    return 0;
}
