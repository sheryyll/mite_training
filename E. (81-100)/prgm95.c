// Find first non-repeating character in a string
#include <stdio.h>

int main(void)
{
    char str[100];
    int freq[256] = {0};

    // read input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // count frequency of each character
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != '\n')   // ignore newline
        {
            freq[(unsigned char)str[i]]++;
        }
    }

    // find first non-repeating character
    int found = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != '\n' && freq[(unsigned char)str[i]] == 1)
        {
            printf("First non-repeating character: %c\n", str[i]);
            found = 1;
            break;
        }
    }

    if(!found)
    {
        printf("No non-repeating character found.\n");
    }

    return 0;
}
