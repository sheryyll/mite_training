// Find the largest of three numbers using minimum comparisons.
#include <stdio.h>

int main(void)
{
    int num1, num2, num3, largest;

    // read input
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    // find largest using minimum comparisons
    if (num1 > num2)
    {
        if (num1 > num3)
            largest = num1;
        else
            largest = num3;
    }
    else
    {
        if (num2 > num3)
            largest = num2;
        else
            largest = num3;
    }

    // print result
    printf("Largest of 3 numbers (%d, %d, %d) = %d\n", num1, num2, num3, largest);

    return 0;
}
