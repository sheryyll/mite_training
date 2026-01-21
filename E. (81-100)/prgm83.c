// Count consonants in a string
#include <stdio.h>

int main(void)
{
    char str[100];
    int count = 0;

    // read input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // count consonants
    for(int i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'a' && str[i] <= 'z') ||
           (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if(!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
                 str[i] == 'o' || str[i] == 'u' ||
                 str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
                 str[i] == 'O' || str[i] == 'U'))
            {
                count++;
            }
        }
    }

    // output
    printf("Number of consonants = %d\n", count);

    return 0;
}
