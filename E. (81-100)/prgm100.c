// Check if a string contains only alphabets
#include <stdio.h>

int main(void)
{
    char str[100];
    int isAlphaOnly = 1;

    // read input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // check alphabets
    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        if(!((str[i] >= 'a' && str[i] <= 'z') ||
             (str[i] >= 'A' && str[i] <= 'Z')))
        {
            isAlphaOnly = 0;
            break;
        }
    }

    // output
    if(isAlphaOnly)
        printf("String contains only alphabets.\n");
    else
        printf("String does not contain only alphabets.\n");

    return 0;
}
