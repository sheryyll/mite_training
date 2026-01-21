// Check if a number is palindrome.
#include <stdio.h>

int main(void) {
    int num, temp, rem, reverse = 0;

    // read input
    printf("Enter number: ");
    scanf("%d", &num);

    // negative numbers are not palindromes
    if (num < 0) {
        printf("%d is not a palindrome\n", num);
        return 0;
    }

    temp = num;

    // reverse the number
    while (temp > 0) {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp = temp / 10;
    }

    // check palindrome
    if (num == reverse) {
        printf("%d is a palindrome\n", num);
    } else {
        printf("%d is not a palindrome\n", num);
    }

    return 0;
}