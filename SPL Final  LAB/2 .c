
#include <stdio.h>

int main() {
    
    float marks[5],sum=0;
    int count=0;
    //input 5 subjects marks from keyboard
    for(int i=0;i<5;i++){
            printf("Subject %d = ",i+1);
            scanf("%f",&marks[i]);
        }
        
    //cheak marks is between 0 - 100 or not 
    for(int i=0;i<5;i++){
            if(0<=marks[i] && marks[i]<=100){
                count++;
            }
        }
        
        //if each marks under 100 then we calculate
        if(count==5){
            for(int i=0;i<5;i++){
                sum=sum+marks[i];
            }
             printf("Summation = %0.2f\n",sum);
             printf("Average = %0.2f",sum/5);
        }
        
        //if each marks is not under 100 then show this message
        else{
            printf("Error. Each subjects have maximum marks input is 100.");
        }
    
    return 0;
}
