// Check if a string contains only digits
#include <stdio.h>

int main(void)
{
    char str[100];
    int isDigitOnly = 1;

    // read input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // check digits
    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        if(str[i] < '0' || str[i] > '9')
        {
            isDigitOnly = 0;
            break;
        }
    }

    // output
    if(isDigitOnly)
        printf("String contains only digits.\n");
    else
        printf("String does not contain only digits.\n");

    return 0;
}
