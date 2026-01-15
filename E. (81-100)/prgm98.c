// Reverse words in a sentence
#include <stdio.h>

int main(void)
{
    char str[200];
    int start = 0, end;

    // read input
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // reverse each word
    for(int i = 0; ; i++)
    {
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            end = i - 1;
            while(start < end)
            {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }

        if(str[i] == '\0')
            break;
    }

    // output
    printf("Sentence with reversed words: %s\n", str);

    return 0;
}
