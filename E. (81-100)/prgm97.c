// Count words in a string
#include <stdio.h>

int main(void)
{
    char str[200];
    int count = 0;
    int inWord = 0;

    // read input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // count words
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
        {
            if(inWord == 0)
            {
                count++;
                inWord = 1;
            }
        }
        else
        {
            inWord = 0;
        }
    }

    // output
    printf("Number of words = %d\n", count);

    return 0;
}
