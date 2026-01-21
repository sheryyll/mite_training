// Check if a character is alphabet, digit, or special character.
#include<stdio.h>

int main(void) {
    char ch;

    // read input
    printf("Enter character: ");
    scanf(" %c", &ch);

    // logic
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("%c is a character\n", ch);
    } else if( ch >= '0' && ch <= '9') {
        printf("%c is a digit\n", ch);
    } else {
        printf("%c is a special character\n", ch);
    }

    return 0;
}