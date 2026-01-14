// Read two integers and print their sum.

#include<stdio.h>

int main(void) {
    int num1, num2, sum;

    // Read two integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate sum
    sum = num1 + num2;

    // Print result
    printf("Sum = %d\n", sum);
    
    return 0;
}