#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a String: ");
    gets(str);

    printf("Uppercase Case Places (index): ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i]>='A' && str[i]<='Z') { //check uppercase
            printf("%d ",i); //print each
        }
    }
    return 0;
}
