#include <stdio.h>

int main()
{

    float temp[7];
    float sum = 0;
    // taking input
    for (int i = 0; i < 7; i++)
    {
        printf("\nEnter temparature for Day %d : ", i + 1);
        scanf("%f", &temp[i]);
    }

    // make sum
    for (int i = 0; i < 7; i++)
    {
        sum = sum + temp[i];
    }

    // make average
    float avgTemp = sum / 7;
    printf("Average temparature = %0.2f", avgTemp);
    return 0;
}
