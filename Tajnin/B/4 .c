#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
       if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i]=str[i]+1; //change to next case
        }
    }

    printf(" Update String: %s\n",str);
    return 0;
}
