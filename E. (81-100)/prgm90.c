// Count frequency of a given character in a string
#include <stdio.h>

int main(void)
{
    char str[100];
    char ch;
    int count = 0;

    // read input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to find frequency: ");
    scanf("%c", &ch);

    // count frequency
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            count++;
        }
    }

    // output
    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}
