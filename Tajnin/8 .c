// Online C compiler to run C program online
#include <stdio.h>

struct apartment{
    int apNum;
    float apSQFeet;
    int rent;
};


int main() {
    struct apartment apartment[5];
    float rentPerSQ[4];
    int max = 0;

  //take input 
    for(int i=0;i<4;i++){
        printf("%d Athlete:\n",i+1);
        printf("Apartment num: ");
        scanf("%d",&apartment[i].apNum);
        printf("Square feet: ");
        scanf("%f",&apartment[i].apSQFeet);
        printf("Rent: ");
        scanf("%d",&apartment[i].rent);
        
    }
    
    //find all rent per sq feet
    for(int i = 0; i < 4; i++) {
         rentPerSQ[i]=apartment[i].apSQFeet/apartment[i].rent;
    }
    
    //cheak max 
    for(int i = 1; i < 4; i++) {
        if(rentPerSQ[i] > rentPerSQ[max]) {
            max= i;
        }
    }

    //print max
    printf("\nApartment of highest rent per sq feet:\n");
    printf("Apartment num: %d\n", apartment[max].apNum);
    printf("Square feet: %f\n", apartment[max].apSQFeet);
    printf("rent: %d\n",apartment[max].rent);

    return 0;
}
