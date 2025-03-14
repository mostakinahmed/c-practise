#include <stdio.h>

int main() {
    int firstValue,lastValue;
    int x=12345;
    
    firstValue = x;
    while (firstValue >= 10) {
        firstValue = firstValue / 10;
    }
    printf("First = %d \nLAst = %d\n", firstValue,x % 10);

    return 0;
}
