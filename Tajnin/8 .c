#include <stdio.h>

struct apartment {
    int apNum;
    float apSQFeet;
    int rent;
};

int main() {
    struct apartment apartment[4];
    float rentPerSQ[4];
    int max = 0;

    // Take input
    for(int i = 0; i < 4; i++) {
        printf("%d Apartment:\n", i + 1);
        printf("Apartment num: ");
        scanf("%d", &apartment[i].apNum);
        printf("Square feet: ");
        scanf("%f", &apartment[i].apSQFeet);
        printf("Rent: ");
        scanf("%d", &apartment[i].rent);
    }

    // Calculate rent per square foot
    for(int i = 0; i < 4; i++) {
        rentPerSQ[i] = apartment[i].rent / apartment[i].apSQFeet;
    }

    // Find max rent per square foot
    for(int i = 1; i < 4; i++) {
        if(rentPerSQ[i] > rentPerSQ[max]) {
            max = i;
        }
    }

    // Print apartment with highest rent per square foot
    printf("\nApartment with the highest rent per square foot:\n");
    printf("Apartment num: %d\n", apartment[max].apNum);
    printf("Square foot: %.2f\n", apartment[max].apSQFeet);
    printf("Rent: %d\n", apartment[max].rent);
    printf("Rent per square foot: %.2f\n", rentPerSQ[max]);

    return 0;
}
