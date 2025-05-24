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
    //check vowel
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; words[i][j] != '\0';j++) {
            if(words[i][j] == 'a' || words[i][j] == 'e' || words[i][j] == 'i' || words[i][j] == 'o' || words[i][j] == 'u' || words[i][j] == 'A' || words[i][j] == 'E' || words[i][j] == 'I' || words[i][j] == 'O' || words[i][j] == 'U' ) {
                count++;
            }
        }
        printf("%s = %d vowels.\n", words[i], count);
    }

    return 0;
}
