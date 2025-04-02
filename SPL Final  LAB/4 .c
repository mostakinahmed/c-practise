
#include <stdio.h>

int main() {
    
    int Arif, Fahmid, Joy;
    
    
    printf("Enter age of Arif: ");
    scanf("%d",&Arif);
    printf("Enter age of Fahmid: ");
    scanf("%d",&Fahmid);
    printf("Enter age of Joy: ");
    scanf("%d",&Joy);
   
   if(Arif<Fahmid && Arif<Joy){
       printf("Youngest one is : Arif");
   }
   else if(Joy<Fahmid && Joy<Arif){
       printf("Youngest one is : Joy");
   }
   else{
       printf("Youngest one is : Fahmid");
   }
    return 0;
}
