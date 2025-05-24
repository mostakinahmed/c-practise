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
    
    //find longest
    int max=0,inx;
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; words[i][j] != '\0';j++) //count word size
        { 
                count++;
        }
        //cheak longest word
        if(count>max){
            max=count;
            inx=i;
        }
    }
    
    printf("Longest word = %s.\n", words[inx]);
    return 0;
}
