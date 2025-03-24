#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i, word_count = 0;
    int in_word = 0;

    // Use fgets instead of gets
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
                word_count++;
            }
        } 

    printf("Word count: %d\n", word_count);

    return 0;
}
