// Online C compiler to run C program online
#include <stdio.h>

struct book{
    char title[30];
    char author[30];
    int price;
};


int main() {
    struct book book[3];
    int max = 0;
    int min = 0;
    for(int i=0;i<3;i++){
        printf("%d Book:\n",i+1);
        printf("Title: ");
        fgets(book[i].title,sizeof(book[i].title),stdin);
        printf("Author: ");
        fgets(book[i].author,sizeof(book[i].author),stdin);
        printf("Price: ");
        scanf("%d",&book[i].price);
        getchar();
    }
    
    //cheak max & min
    for(int i = 1; i < 3; i++) {
        if(book[i].price > book[max].price) {
            max= i;
        }
        if(book[i].price < book[min].price) {
            min= i;
        }
    }

    //print max
    printf("\nMaximum Price of book:\n");
    printf("Title: %s", book[max].title);
    printf("Author: %s", book[max].author);
    printf("Price: %d\n", book[max].price);

    // printf min
    printf("\nMinimum Price of book:\n");
    printf("Title: %s", book[min].title);
    printf("Author: %s", book[min].author);
    printf("Price: %d\n", book[min].price);

    return 0;
}
