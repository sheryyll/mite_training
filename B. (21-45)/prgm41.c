// Find sum of prime numbers up to N.
#include <stdio.h>

int main(void) {
    int num, i, j, isPrime, psum = 0;

    // read input
    printf("Enter number: ");
    scanf("%d", &num);

    if (num < 2) {
        printf("No prime numbers up to %d\n", num);
        return 0;
    }

    for (i = 2; i <= num; i++) {
        isPrime = 1;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            psum += i;
        }
    }

    printf("Sum of prime numbers up to %d = %d\n", num, psum);

    return 0;
}
