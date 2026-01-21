// Find length of a string without using library function.
#include <stdio.h>

int main(void)
{
    char str[100];
    int length = 0;

    // read input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // calculate length
    while (str[length] != '\0') {
        length++;
    }

    // subtract 1 if newline is present (from fgets)
    if (length > 0 && str[length - 1] == '\n') {
        length--;
    }

    printf("Length of the string = %d\n", length);

    return 0;
}
