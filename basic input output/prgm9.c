// Read a string and print it.

#include<stdio.h>

int main(void) {
    char str[50]; // decalre a character array

    // read a string 
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // print string
    printf("You entered: %s\n", str);

    return 0;
}