// Find the sum of digits of a number.
#include <stdio.h>

int main(void) {
    int num, temp, sum = 0;

    // read input
    printf("Enter number: ");
    scanf("%d", &num);

    temp = num; // store original number

    if (temp < 0)
        temp = -temp;

    while (temp > 0) {
        sum += temp % 10;   // add last digit
        temp = temp / 10;   // remove last digit
    }

    printf("Sum of digits in %d = %d\n", num, sum);

    return 0;
}

