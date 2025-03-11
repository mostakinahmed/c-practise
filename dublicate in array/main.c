#include <stdio.h>
// Main function
int main()
{
   int i, n, a[100],b[100],count=0,sum=0;
   
   printf("Enter size : ");
   scanf("%d", &n);
  
   for (i = 0; i < n; i++){
      printf("element - %d : ", i);
      scanf("%d", &a[i]); 
   }
   
   for (i = 0; i < n; i++) {
           for (int j = i+1; j < n; j++)
       {
          if(a[i] == a[j]){
              count++;
              break;
          }
          
       }
   }
       printf("total : %d : \n",count);
   
   return 0;
}
