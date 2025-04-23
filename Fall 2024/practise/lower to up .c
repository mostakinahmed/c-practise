#include <stdio.h>
#include <string.h>
int main() {
   char s[100];
   printf("\nEnter a string : ");
   fgets(s,sizeof(s),stdin);
   int i=0;
   while(s[i]!='\0'){
       if(s[i]>='A' && s[i]<='Z'){
           s[i]=s[i]-32;
           //for uppercase to lower
           s[i]=s[i]+32;
       }
       i++;
   }
   printf("\nString in Upper Case = %s", s);
   return 0;
}
