// Check if a number is an Armstrong number (3-digit).
#include <stdio.h>

int main(void) {
    int num, temp, digit, sum = 0;

    // read input
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    // check 3-digit condition
    if (num < 100 || num > 999) {
        printf("%d is not a 3-digit number\n", num);
        return 0;
    }

    temp = num;

    // calculate sum of cubes of digits
    while (temp != 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    // check Armstrong
    if (sum == num) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is not an Armstrong number\n", num);
    }

    return 0;
}
