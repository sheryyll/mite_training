// Check if a number is a perfect number.
#include <stdio.h>

int main(void) {
    int num, i, sum = 0;

    // read input
    printf("Enter number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("%d is not a perfect number\n", num);
        return 0;
    }

    // find sum of proper divisors
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // check perfect number
    if (sum == num) {
        printf("%d is a perfect number\n", num);
    } else {
        printf("%d is not a perfect number\n", num);
    }

    return 0;
}
