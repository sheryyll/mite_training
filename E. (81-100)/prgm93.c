// Replace spaces with a hyphen (-)
#include <stdio.h>

int main(void)
{
    char str[100];

    // read input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // replace spaces with hyphen
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            str[i] = '-';
        }
    }

    // output
    printf("Modified string: %s\n", str);

    return 0;
}
