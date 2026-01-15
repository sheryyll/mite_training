// Remove all spaces from a string
#include <stdio.h>

int main(void)
{
    char str[100];
    int i, j = 0;

    // read input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // remove spaces
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';

    // output
    printf("String without spaces: %s\n", str);

    return 0;
}
