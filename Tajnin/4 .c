#include <stdio.h>
#include <string.h>

struct car{
    int Id;
    char model[30];
    float rate;
};

int main() {
    struct car car[3];
    int rDay;
    
    //take three input
    for(int i=0;i<3;i++){
        printf("%d Cars:\n",i+1);
        printf("Car Id : ");
        scanf("%d",&car[i].Id);
        getchar();
        printf("Model : ");
        fgets(car[i].model,sizeof(car[i].model),stdin);
        
        printf("Rate per day : ");
        scanf("%f",&car[i].rate);
        getchar();
        
    }
    
    //take input for specified days
    printf("\nEnter rental days: ");
    scanf("%d",&rDay);
    
    //calculate total rent of each car & print
    printf("\nTotal rental cost details:\n");
    for(int i = 0; i < 3; i++) {
        printf("Car Id : %d\n", car[i].Id);
        printf("Model: %s", car[i].model);
        printf("Total Rent : %.2f\n", car[i].rate*rDay);
    }

    return 0;
}
