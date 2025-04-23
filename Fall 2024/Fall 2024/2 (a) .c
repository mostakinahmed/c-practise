#include <stdio.h>

int main()
{
    int n,rem=0;
    printf("Enter number: ");
    scanf("%d",&n);
    
    while(n!=0){
        rem=rem+(n%10);
        n=n/10;
    }
    // Output
    printf("\n%d", rem);
   

    return 0;
}
