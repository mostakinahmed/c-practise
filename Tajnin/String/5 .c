#include <stdio.h>
#include <ctype.h>

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
    
    //make convert
    printf("Update word list:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; words[i][j] != '\0';j++) {
           if (words[i][j] == 'a' || words[i][j] == 'e' || words[i][j] == 'i' || words[i][j] == 'o' || words[i][j] == 'u') {
            words[i][j] = words[i][j] - 32;  // Convert to uppercase
            }
            
            else if(words[i][j] == 'A' || words[i][j] == 'E' || words[i][j] == 'I' || words[i][j] == 'O' || words[i][j] == 'U'){
                words[i][j] = words[i][j]; //make same
            }
            
            else{
                if(isupper(words[i][j])){
                    words[i][j] = words[i][j] + 32; //Convert to lower case
                }
                else{
                    words[i][j] = words[i][j];
                }
            
            }
       }
       printf("%d. word = %s.\n",i+1, words[i]);
    }

    return 0;
}
