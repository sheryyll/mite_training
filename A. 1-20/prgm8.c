// Check whether a character is uppercase or lowercase.
#include <stdio.h>

int main(void) {
    char ch;

    // read input
    printf("Enter character: ");
    scanf(" %c", &ch);

    // check case
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is uppercase\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c is lowercase\n", ch);
    } else {
        printf("%c is not an alphabet\n", ch);
    }

    return 0;
}
