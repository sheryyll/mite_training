// Find factorial of a number.
#include <stdio.h>

int main(void) {
    int num, i;
    int factorial = 1;

    // read input
    printf("Enter a number: ");
    scanf("%d", &num);

    // factorial is not defined for negative numbers
    if (num < 0) {
        printf("Factorial is not defined for negative numbers\n");
        return 0;
    }

    // calculate factorial
    for (i = 1; i <= num; i++) {
        factorial = factorial * i;
    }

    printf("Factorial of %d = %d\n", num, factorial);

    return 0;
}
