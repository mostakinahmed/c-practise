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
        mostakin.id = 831;
        mostakin.phone = 8807733820336;
        mostakin.grade = 'A';
        
        printf("id = %d\n",mostakin.id);
        printf("id = %ld\n",mostakin.phone);
        printf("id = %c\n",mostakin.grade);

    
    printf("\n");
    
   
    
    return 0;
}
