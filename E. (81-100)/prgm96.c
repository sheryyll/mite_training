// Find first repeating character in a string
#include <stdio.h>

int main(void)
{
    char str[100];
    int freq[256] = {0};

    // read input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // find first repeating character
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '\n')
            continue;

        if(freq[(unsigned char)str[i]] == 1)
        {
            printf("First repeating character: %c\n", str[i]);
            return 0;
        }
        freq[(unsigned char)str[i]]++;
    }

    printf("No repeating character found.\n");

    return 0;
}
