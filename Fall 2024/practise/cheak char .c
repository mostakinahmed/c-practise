#include <stdio.h>

int main() {
    char a, b, c, largest;

    printf("Enter three numbers: ");
    scanf("%c", &a);

    
   if(a>='a' && a<='z' || a>='A' && a<='Z'){
       printf("char");
   }
   else{
       printf("not char");
   }

    

    return 0;
}
