// Read a character and print its ASCII value.

#include<stdio.h>

int main(void){
    char character;
    int ascii_value;

    // read character
    printf("Enter a character: ");
    scanf(" %c", &character);

    // convert character to ASCII calue
    ascii_value = character;

    // print the result
    printf("ASCII value of %c = %d\n", character, ascii_value);

    return 0;
}