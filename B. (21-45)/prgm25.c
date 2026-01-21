// Find the product of digits of a number.
#include <stdio.h>

int main(void) {
    int num, temp, product = 1;

    // read input
    printf("Enter number: ");
    scanf("%d", &num);

    temp = num; // store original number
    if (num == 0) {
        product = 0;
    } else {
        if (temp < 0)
            temp = -temp;

        while (temp > 0) {
            product *= temp % 10; // multiply last digit
            temp = temp / 10; // remove last digit
        }
    }

    printf("Product of digits in %d = %d\n", num, product);

    return 0;
}
