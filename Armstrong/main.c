// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    // Write C code here
    int i,j,l,n,k=0,x,rem=0,m,count=0,power,sum=0;
    printf("Enter num: ");
    scanf("%d",&n);
    m=x=n;

     while(n!=0){
            rem=n%10;
            n=n/10;
            count++;
        }
         while(m!=0){
            rem=m%10;
            power=pow(rem, count);
            sum=sum+power;
            m=m/10;
        }

        if(sum==x){
            printf("Yes Armstrong",sum);
        }
        else{
            printf("Not Armstrong");
        }


    return 0;
}
