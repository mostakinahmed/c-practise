
#include <stdio.h>

int areaCal(int side){
    int area,perimeter;
    area=side*side;
}

int perimeterCal(int side){
    int perimeter;
    perimeter=4*side;
}

int main()
{
    int side,area,perimter;
    printf("Enter side: ");
    scanf("%d",&side);
    
    area=areaCal(side);
    perimter=perimeterCal(side);
    
    printf("\nArea = %d", area);
    printf("\nPerimter = %d", perimter);
  
    return 0;
}
