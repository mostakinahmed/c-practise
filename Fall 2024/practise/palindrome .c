#include <stdio.h>

int main() {
  
   char ch[100],data[100];
   scanf("%s",ch);
   
   int i=0,count=0;
   while(ch[i]!='\0'){
       i++;
   }
   
   for(int j=0;j<i;j++){
       data[i-j-1]=ch[j];
   }
   
   //cheak how many ch are matched
   int j=0;
   while(data[j]!='\0'){
       if(data[j]==ch[j]){
           count++;
       }
       j++;
   }
   
   if(count==i){
       printf("Palindrome");
   }
   else{
        printf("NOt a Palindrome");
   }
 
   
   return 0;
}
