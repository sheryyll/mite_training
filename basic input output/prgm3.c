// Read two integers and print their difference.

#include<stdio.h>

int main(void) {
    int num1, num2, difference;

    // Read two integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate difference
    difference = num1 - num2;

    // Print result
    printf("Difference = %d\n", difference);
    
    return 0;
}