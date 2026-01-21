// Check if two strings are anagrams (lowercase only)
#include <stdio.h>

int main(void)
{
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i;

    // read input
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // count frequency of characters in first string
    for(i = 0; str1[i] != '\0'; i++)
    {
        if(str1[i] >= 'a' && str1[i] <= 'z')
        {
            freq1[str1[i] - 'a']++;
        }
    }

    // count frequency of characters in second string
    for(i = 0; str2[i] != '\0'; i++)
    {
        if(str2[i] >= 'a' && str2[i] <= 'z')
        {
            freq2[str2[i] - 'a']++;
        }
    }

    // check if both frequency arrays are equal
    int isAnagram = 1;
    for(i = 0; i < 26; i++)
    {
        if(freq1[i] != freq2[i])
        {
            isAnagram = 0;
            break;
        }
    }

    // output
    if(isAnagram)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}
