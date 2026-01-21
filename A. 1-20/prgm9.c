//  Check if a number lies between two given numbers.
#include <stdio.h>

int main(void) {
    int num1, num2, checker;

    // read input
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter number to check: ");
    scanf("%d", &checker);

    // check if number lies between
    if ((checker >= num1 && checker <= num2) ||
        (checker >= num2 && checker <= num1)) {
        printf("%d lies between %d and %d\n", checker, num1, num2);
    } else {
        printf("%d does not lie between %d and %d\n", checker, num1, num2);
    }

    return 0;
}
