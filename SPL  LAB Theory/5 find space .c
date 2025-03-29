#include <stdio.h>
#include <string.h>

int main() {
    char data[100];
    int count =0;

    printf("Enter data (string): ");
    gets(data);

    //find string size
    int size=strlen(data);
    
    //find spaces 
    for(int i=0;i<size;i++){
        if(data[i]==' '){
            count++;
            break;
        }
    }

    //if found then count is 1
    if(count==1){
        printf("found");
    }
    
    //otherwise count is 0
    else if(count==0){
        printf("Not found");
    }

    return 0;
}
