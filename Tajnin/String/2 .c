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

    int max=0,inx;
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; words[i][j] != '\0';j++) {
            if(words[i][j]=='t' || words[i][j]=='T') //count t
            {
                count++;
            }
        }
        //cheak max t
        if(count>max){
            max=count;
            inx=i;
        }
    }
    
    printf("Highest 't' = %s.\n", words[inx]);
    return 0;
}
