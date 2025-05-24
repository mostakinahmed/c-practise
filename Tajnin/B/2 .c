#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])){
            str[i]=str[i]+32;
        }
        else{
            str[i]=str[i]-32;
        }
    }

    printf(" Update String: %s\n",str);
    return 0;
}
