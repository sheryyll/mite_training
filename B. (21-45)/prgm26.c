// Reverse a number.
#include <stdio.h>

int main(void) {
    int num, temp, rem, reverse = 0;

    // read input
    printf("Enter number: ");
    scanf("%d", &num);

    temp = num;

    // handle negative number
    if (temp < 0)
        temp = -temp;

    // reverse logic
    while (temp > 0) {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp = temp / 10;
    }

    // restore sign if original number was negative
    if (num < 0)
        reverse = -reverse;

    printf("Reverse of %d = %d\n", num, reverse);

    return 0;
}
