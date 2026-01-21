// Check whether a number is divisible by both 3 and 5.
#include <stdio.h>

int main(void)
{
    int num;

    // read input
    printf("Enter a number: ");
    scanf("%d", &num);

    // check if its divisible by 3 and 5
    if (num % 3 == 0 && num % 5 == 0) {
        printf("%d is divisible by 3 and 5\n", num);
    } else {
        printf("%d is not divisible by 3 and 5\n", num);
    }

    return 0;
}