// Find LCM of two numbers.
#include <stdio.h>

int main(void) {
    int num1, num2, a, b, rem, gcd, lcm;

    // read input
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // handle negatives
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;

    a = num1;
    b = num2;

    // Euclidean algorithm for GCD
    while (b != 0) {
        rem = a % b;
        a = b;
        b = rem;
    }

    gcd = a;

    // LCM formula
    lcm = (num1 * num2) / gcd;

    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}
