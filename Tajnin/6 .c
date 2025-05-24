#include <stdio.h>

struct movie{
    char title[30];
    char director[30];
    int rYear;
};

int main() {
    struct movie movie[3];
    int old = 0;
    
    //take three input
    for(int i=0;i<3;i++){
        printf("%d Movie:\n",i+1);
        printf("Title: ");
        fgets(movie[i].title,sizeof(movie[i].title),stdin);
        printf("Author: ");
        fgets(movie[i].director,sizeof(movie[i].director),stdin);
        printf("Release Year: ");
        scanf("%d",&movie[i].rYear);
        getchar();
    }
    
    //cheak oldest movie 
    for(int i = 1; i < 3; i++) {
        if(movie[i].rYear < movie[old].rYear) {
            old= i; 
        }
    }

    //print old movie
    printf("\nOldest movie details:\n");
    printf("Title: %s", movie[old].title);
    printf("Director: %s", movie[old].director);
    printf("Release Year: %d\n", movie[old].rYear);

    return 0;
}
