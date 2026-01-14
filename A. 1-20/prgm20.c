// Check if a number is within a given inclusive range.
#include <stdio.h>

int main(void) {
    int num, lower, upper;

    // read input
    printf("Enter lower bound of range: ");
    scanf("%d", &lower);
    printf("Enter upper bound of range: ");
    scanf("%d", &upper);
    printf("Enter the number to check: ");
    scanf("%d", &num);

    // check if number is within the range (inclusive)
    if(num >= lower && num <= upper) {
        printf("%d lies within the range %d to %d (inclusive)\n", num, lower, upper);
    } else {
        printf("%d does NOT lie within the range %d to %d\n", num, lower, upper);
    }

    return 0;
}
