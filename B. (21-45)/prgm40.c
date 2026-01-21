// Print all prime numbers up to N.
#include <stdio.h>

int main(void) {
    int num, i, j, isPrime;

    // read input
    printf("Enter number: ");
    scanf("%d", &num);

    if (num < 2) {
        printf("No prime numbers up to %d\n", num);
        return 0;
    }

    printf("Prime numbers up to %d are:\n", num);

    for (i = 2; i <= num; i++) {
        isPrime = 1;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    return 0;
}
