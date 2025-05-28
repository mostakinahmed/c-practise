#include <stdio.h>

int main()
{
    char data[20], ch;
    char *ptr = data;
    int count = 0;
    printf("Enter String: ");
    gets(data);
    int i = 0;
    while (data[i] != '\0')
    {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
        {
            count++;
        }
        ptr++;
        i++;
    }
    printf("vowel : %d", count);

    return 0;
}
