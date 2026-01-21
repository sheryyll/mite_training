// Read an integer and print it.

#include<stdio.h>

int main(void) {
    int number;

    // Read integer input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // print the integer
    printf("You entered: %d\n", number);
    return 0;
}