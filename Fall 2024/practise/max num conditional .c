#include <stdio.h>

int main() {
    int a, b, c, largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    
    int lar=a>b?(a>c?a:c):(b>c?b:c);

    printf("The largest number is: %d\n", lar);

    return 0;
}
