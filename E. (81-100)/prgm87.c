// Check if a string is palindrome
#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0, j = 0;
    int isPalindrome = 1;

    // read input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // find length
    while(str[j] != '\0')
    {
        j++;
    }

    // remove newline character if present
    if(j > 0 && str[j - 1] == '\n')
    {
        j--;
    }

    // check palindrome
    j--;  // last valid index
    while(i < j)
    {
        if(str[i] != str[j])
        {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    // output
    if(isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
