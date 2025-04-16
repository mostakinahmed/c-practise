#include <stdio.h>
#include <string.h>

int main() {
    char str[100], data[100];
    int count = 0;

    gets(str);

    int len = strlen(str);

    // Reverse string
    for(int i = len - 1, j = 0; i >= 0; i--, j++) {
        data[j] = str[i];
    }

    // Compare
    for(int j = 0; j < len; j++) {
        if(str[j] == data[j]) {
            count++;
        }
    }
    if(count == len) {
        printf("PAL");
    } else {
        printf("NOT PAL");
    }

    return 0;
}
