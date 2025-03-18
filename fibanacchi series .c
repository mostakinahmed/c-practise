// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   int n=10;
    int f_value = 0, s_value = 1,n_value;
    
     printf("1 value = %d \n",f_value);
      printf("2 value = %d \n",s_value);
    for(int i=3;i<=n;i++){
        n_value=f_value+s_value;
        printf("%d value = %d \n",i,n_value);
        f_value=s_value;
        s_value=n_value;
      
    }
    
    printf("\n");
    
   
    
    return 0;
}
