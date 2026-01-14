// Check if a number ends with digit 5 or 0.
#include <stdio.h>

int main(void) {
    int num, last_digit;

    // read input
    printf("Enter the number: ");
    scanf("%d", &num);

    // find last digit
    last_digit = num % 10;

    // check if last digit is 5 or 0
    if (last_digit == 5 || last_digit == 0) {
        printf("%d ends with %d\n", num, last_digit);
    } else {
        printf("%d does not end with 5 or 0\n", num);
    }

    return 0;
}
