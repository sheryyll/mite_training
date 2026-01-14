// Find absolute value of a number without using library function.
#include <stdio.h>

int main(void) {
    int num;

    // read input
    printf("Enter number: ");
    scanf("%d", &num);

    // print absolute value
    printf("Absolute value of %d = %d\n", num, (num >=0 ? num : (num * -1)));

    return 0;
}