#include <stdio.h>


int isPal( int n){
    int reversed = 0, remainder=0;
     // reversed integer is stored in reversed variable
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    
    return reversed;
}
int main() {
    int rev,n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    int original = n;
    rev=isPal(n);
   

    // palindrome if orignal and reversed are equal
    if (original == rev)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}
