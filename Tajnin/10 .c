#include <stdio.h>

struct athlete{
    char name[30];
    char sport[30];
    int medal;
};

int main() {
    struct athlete athlete[5];
    int max = 0;
    for(int i=0;i<5;i++){
        printf("%d Athlete:\n",i+1);
        printf("Name: ");
        fgets(athlete[i].name,sizeof(athlete[i].name),stdin);
        printf("Sport: ");
        fgets(athlete[i].sport,sizeof(athlete[i].sport),stdin);
        printf("Medal: ");
        scanf("%d",&athlete[i].medal);
        getchar();
    }
    
    //cheak max medal
    for(int i = 1; i < 5; i++) {
        if(athlete[i].medal > athlete[max].medal) {
            max= i;
        }
    }

    //print max
    printf("\nAthlete of most medal:\n");
    printf("Name: %s", athlete[max].name);
    printf("Sport: %s", athlete[max].sport);
    printf("Medal: %d\n",athlete[max].medal);

    return 0;
}
