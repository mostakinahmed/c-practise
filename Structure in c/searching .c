#include <stdio.h>
struct student {
    char name[20];
    int id;
    char course[30];
    char dep[30];
   };
int main() {
    int n;
    printf("Enter student quantity: ");
    scanf("%d",&n);
    struct student student[n];
    
    printf("\nEnter student Information: \n");
    for(int i=0;i<n;i++){
         printf("student ID: ");
         scanf("%d",&student[i].id);
               getchar();
         printf("student Name: ");
         fgets(student[i].name, sizeof(student[i].name), stdin);
         
         printf("Course Name: ");
         fgets(student[i].course, sizeof(student[i].course), stdin);
        
         printf("Dep Name: ");
         fgets(student[i].dep, sizeof(student[i].dep), stdin);
    }

    printf("\nStudent Information: \n");
     for(int i=0;i<n;i++){
         printf("ID: %d\n",student[i].id);
         printf("Name: %s",student[i].name);
         printf("Course: %s",student[i].course);
         printf("Dep: %s",student[i].dep);
    }

    
    //printf("Try programiz.pro");

    return 0;
}
