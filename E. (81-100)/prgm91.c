// Count frequency of each character in a string
#include <stdio.h>

int main(void)
{
    char str[100];
    int freq[256] = {0};

    // read input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // count frequency
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != '\n')   // ignore newline
        {
            freq[(unsigned char)str[i]]++;
        }
    }

    // display frequency
    printf("Character frequencies:\n");
    for(int i = 0; i < 256; i++)
    {
        if(freq[i] > 0)
        {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }

    return 0;
}
