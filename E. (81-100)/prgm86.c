// Count spaces in a string
#include <stdio.h>

int main(void)
{
    char str[100];
    int count = 0;

    // read input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // count spaces
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            count++;
        }
    }

    // output
    printf("Number of spaces = %d\n", count);

    return 0;
}
