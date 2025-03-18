// Online C compiler to run C program online
#include <stdio.h>


struct student{
    int id;
    long phone;
    char grade;
};

int main() {
    // Write C code here
  
        struct student student[3];
        //user input
        for(int i=0,j=1;i<3,j<=3;i++,j++){
             printf("Student = %d\n",j);
             printf("Enter ID: ");
             scanf("%d",&student[i].id);
             printf("Enter Phone: ");
             scanf("%ld",&student[i].phone);
             printf("Enter Grade: ");
             scanf("%s",&student[i].grade);
             printf("\n");
        }
        
        printf("\n\nStudent Information:\n");
        
        for(int i=0;i<3;i++){
            printf("Name : Student[%d]\n",i+1);
            printf("Id = %d\n",student[i].id);
            printf("Phone = %ld\n",student[i].phone);
            printf("Grade = %c\n",student[i].grade);
            }

    printf("\n");
    
    return 0;
}
