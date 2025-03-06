// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int i,j,k,l,m,n,g;
    printf("Enter Num: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(g=n;g>i;g--){
            printf("  ");
        }
        for(j=1;j<=i;j++){
            printf("*   ");
        }
        printf("\n");
    }
    for(i=n-1;i>0;i--){
        
        for(g=n;g>i;g--){
            printf("  ");
        }
        for(j=1;j<=i;j++){
            printf("*   ");
        }
        printf("\n");
    }
    
    
    
    

    return 0;
}