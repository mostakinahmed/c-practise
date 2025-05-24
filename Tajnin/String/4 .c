#include <stdio.h>

int main() {
    int n;
    printf("Enter number of words: ");
    scanf("%d", &n);
    char words[n][20];
    
    //take input
    for(int i = 0; i < n; i++) {
            printf("%d. Words: ",i+1);
            scanf("%s", words[i]);
    }
    printf("\n"); //new line
    
    //make all uppercase
     printf("Uppercase word list:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; words[i][j] != '\0';j++) {//count word size
           if (words[i][j] >= 'a' && words[i][j] <= 'z') {
            words[i][j] = words[i][j] - 32;  // Convert to uppercase
            }
       }
       printf("%d. word = %s.\n",i+1, words[i]);
    }

    return 0;
}
