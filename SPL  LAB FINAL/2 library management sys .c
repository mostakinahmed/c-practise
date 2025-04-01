#include <stdio.h>
#include <string.h>

int index=-1; //array index for empty array

struct library {
    int book_ID;
    int year;
    char title[100];
    char author[100];

};

struct library data[100]; //data array for storing all books

//AddBook function for adding data
void addBook()
{
    ++index; //start array index from here
    printf("\n Adding Books......\n");
    printf(" Book = %d.\n",index+1); //For showing book number
    printf(" Enter Book ID: ");
    scanf("%d", &data[index].book_ID);
    getchar();
    printf(" Enter Book Title: ");
    gets(data[index].title);

    printf(" Enter Book Author: ");
    gets(data[index].author);

    printf(" Enter Book published Year: ");
    scanf("%d", &data[index].year);
    printf(" Book Added Successful......\n");


}

//search function to finding specific value
void searchBook()
{
    int search_ID;
    int found=0,i;
    printf("\n Search Book......\n");

    //cheak library collection is empty or not
    if(index>=0) {
        printf(" Enter Search ID: ");
        scanf("%d",&search_ID);
        for(i=0; i<=index; i++) {
            if(data[i].book_ID==search_ID) {
                found++;
                break;
            }
        }

        if(found==1) {
            printf("\n Book Found: \n"); 
            printf(" Book = %d.\n",i+1); //For showing book number
            printf(" ID : %d\n", data[i].book_ID);
            printf(" Title : %s\n", data[i].title);
            printf(" Author : %s\n", data[i].author);
            printf(" Year : %d\n", data[i].year);
            printf("\n");
        } else if(found==0) {
            printf("\n Data Not Found\n");
        }
    } else {
        printf(" Empty Collection. Please adding book first.\n");
    }

}

//delete function
void deleteBook()
{
    int delete_Id;
    printf("\n Books delete......\n");

    //cheak library collection is empty or not
    if(index>=0) {
        printf(" Enter Book ID: ");
        scanf("%d",&delete_Id);
        for(int i=0; i<=index; i++) {
            if(data[i].book_ID==delete_Id) {
                //so delete index is 'i'
                for(int j = i; j<=index; j++) {
                    data[i]=data[i+1];
                    ++i;
                }
                index--;
                printf(" Data delete Successful...ID = %d\n",delete_Id);
                break;
            } else {
                printf(" ID Not Found\n");
            }
        }
    }

    else {
        printf(" Empty Collection. Please adding book first.\n");
    }

}

//display function for displaying latest all data
void displayBook()
{
    printf("\n");
    printf(" Library Collection.......\n");

    //cheak library collection is empty or not
    if(index>=0) {
        for (int i = 0; i <= index; i++) {
            printf(" Book = %d.\n",i+1); //For showing book number
            printf(" ID : %d\n", data[i].book_ID);
            printf(" Title : %s\n", data[i].title);
            printf(" Author : %s\n", data[i].author);
            printf(" Year : %d\n", data[i].year);
            printf("\n");
        }
    }

    else {
        printf(" Empty collection. Please adding book first.\n");
    }

}


int main()
{
    int n;
    int run = 1; // Use this to control the loop
    printf("\ Smart Library Management System.......");
    while (run) {
        // Display menu
        printf("\n 1. Add Book\n");
        printf(" 2. Display All Books\n");
        printf(" 3. Search Books\n");
        printf(" 4. Delete Books\n");
        printf(" 0. Exit\n");
        printf(" Choose an option: ");
        scanf("%d", &n);

        // user option management
        switch (n) {
        case 1:
            addBook();
            break;
        case 2:
            displayBook();
            break;
        case 3:
            searchBook();
            break;
        case 4:
            deleteBook();
            break;

        case 0:
            run = 0;
            printf("\n Program Exiting...\n");
            break;
        default:
            printf(" Invalid option! Try again.\n");
        }
    }

    return 0;
}
