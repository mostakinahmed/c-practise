// Online C compiler to run C program online
#include <stdio.h>


struct student{
    int id;
    long phone;
    char grade;
};

int main() {
    // Write C code here
  
        struct student mostakin,tonmoy;
        //user input
        printf("Enter ID: ");
        scanf("%d",&mostakin.id);
        printf("Enter Phone: ");
        scanf("%ld",&mostakin.phone);
        printf("Enter Grade: ");
        scanf("%s",&mostakin.grade);

        
        printf("id = %d\n",mostakin.id);
        printf("Phone = %ld\n",mostakin.phone);
        printf("Grade = %c\n",mostakin.grade);

    
    printf("\n");
    
   
    
    return 0;
}
