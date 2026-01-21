// Convert uppercase characters to lowercase manually
#include <stdio.h>

int main(void)
{
    char str[100];

    // read input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // convert to lowercase
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    // output
    printf("Lowercase string: %s\n", str);

    return 0;
}
