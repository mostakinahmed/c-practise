#include <stdio.h>
#include <stdbool.h>

int isPrime(int n){
    if(n==0 || n==1){
        return false;
    }
    if(n==2){
        return true;
    }
    
    //prime cheak
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            return false;
            break;
        }
    }
    return true;
}


int main() {
  
   int n;
   printf("\nEnter a num : ");
   scanf("%d",&n);
   
   if(isPrime(n)==1){
       printf("Prime");
   }
    else if(isPrime(n)==0){
       printf("Not Prime");
   }
   
   return 0;
}
