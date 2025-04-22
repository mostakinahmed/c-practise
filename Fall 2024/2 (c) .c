#include <stdio.h>

int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);

int addition(int a,int b){
    int result=a+b;
    printf("%d + %d = %d",a,b,result);
}

int subtraction(int a,int b){
    int result=a-b;
    printf("%d - %d = %d",a,b,result);
}
int multiplication(int a,int b){
   int result=a*b;
    printf("%d * %d = %d",a,b,result);
}
int division(int a,int b){
    float result=(float)a/b;
    printf("%d / %d = %.2f",a,b,result);
}

int main()
{
    int a,b,operation;
    printf("Enter A: ");
    scanf("%d",&a);
    printf("Enter B: ");
    scanf("%d",&b);
 
    
    printf("Operation List......");
    printf("\n1. Addition.\n2. Subtraction. \n3. Multiplication. \n4. Division.");
     printf("\nChoose Option: ");
      scanf("%d",&operation);
    
    switch(operation){
        case 1:
              addition(a,b);
              break;
    
         case 2:
              subtraction(a,b);
              break;
    
         
         case 3:
              multiplication(a,b);
              break;
    
         case 4:
              division(a,b);
              break;
            
            default:
              printf("wrong option!");
    }

  
    return 0;
}
