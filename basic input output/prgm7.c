// Read an ASCII value and print the character

#include<stdio.h>

int main(void) {
    int ascii_value;
    char character;

    // read ASCII value
    printf("Enter ASCII value: ");
    scanf("%d", &ascii_value);

    // convert ASCII to character
    character = (char)ascii_value;

    // print result
    printf("Character for ASCII value of %d = %c\n", ascii_value, character);

    return 0;
}