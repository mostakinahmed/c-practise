#include <stdio.h>

int index=0;

struct library
{
   int book_ID;
   int year;
   char title[100];
   char author[100];

};

 struct library data[100]; //data array for storing all books

 //AddBook function for adding data
 void addBook() {

    printf("Enter Book ID: ");
    scanf("%d", &data[index].book_ID);
    getchar();
    printf("Enter Book Title: ");
    gets(data[index].title);

    printf("Enter Book Author: ");
    gets(data[index].author);

    printf("Enter Book published Year: ");
    scanf("%d", &data[index].year);
    ++index;
}

//display function for displaying latest all data
void displayBook() {
    printf("\n");
    printf("Library Collection:\n");
    for (int i = 0; i < index; i++) {
        printf("ID : %d\n", data[i].book_ID);
        printf("title : %s\n", data[i].title);
        printf("Author : %s\n", data[i].author);
        printf("year : %d\n", data[i].year);
        printf("\n");
    }
}

//search function to finding specific value
void serchBook(){
    int search_ID;
    int found=0,i;
    printf("Enter Search ID: ");
    scanf("%d",&search_ID);
    for(i=0;i<index;i++){
        if(data[i].book_ID==search_ID){
            found++;
            break;
        }
    }

    if(found==1){
            printf("\nBook Found: \n");
            printf("ID : %d\n", data[i].book_ID);
            printf("title : %s\n", data[i].title);
            printf("Author : %s\n", data[i].author);
            printf("year : %d\n", data[i].year);
            printf("\n");
    }
    else if(found==0){
        printf("\nData Not Found\n");
    }
}

int main() {
    int n;
    int run = 1; // Use this to control the loop

    while (run) {
        // Display menu
        printf("\n1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Books\n");
        printf("10. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &n);

        // Handle user choice
        switch (n) {
            case 1:
                addBook();
                break;
            case 2:
                displayBook();
                break;
            case 3:
                serchBook();
                break;

            case 10:
                run = 0;
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid option! Try again.\n");
        }
    }

    return 0;
}
