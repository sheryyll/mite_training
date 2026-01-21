// WAP to add two numbers
#include <stdio.h>

int main(void)
{
    float num1, num2;

    printf("Enter first number: ");
    while (scanf("%f", &num1) != 1) {
        printf("Invalid input. Please enter a valid number: ");
        while (getchar() != '\n'); 
    }

    printf("Enter second number: ");
    while (scanf("%f", &num2) != 1) {
        printf("Invalid input. Please enter a valid number: ");
        
        // Clear the buffer
        while (getchar() != '\n');
    }

    float num3 = num1 + num2;
    printf("\nAddition of %.2f and %.2f : %.2f\n", num1, num2, num3);

    return 0;
}