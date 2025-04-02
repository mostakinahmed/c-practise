
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char data[100];
    int alpha = 0, spe_Char = 0, digit = 0;
    // input data
    printf("Enter a string: ");
    gets(data);

    // Counting total char, alpha and special char
    //loop running upto null element
    for (int i = 0; data[i] != '\0'; i++) {
        if (isalpha(data[i])) {
            alpha++;
              }
        else if (isdigit(data[i])) {
            digit++;
              } 
        else if (data[i] != ' ' && data[i] != '\n') { 
            spe_Char++;
              }
    }

    // Print result
    printf("Total Alphabet: %d\n", alpha);
    printf("Total Digit: %d\n", digit);
    printf("Total Special Character: %d\n", spe_Char);

    return 0;
}
