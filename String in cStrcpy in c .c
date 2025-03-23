
#include <stdio.h>
#include <string.h>

int main() {
    char name[]="Mostakin Ahmed";
    char name2[100];
    strcpy(name2,name);
    
    printf("%s\n",name);
    printf("%s\n",name2);
    return 0;
}
