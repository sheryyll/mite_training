// Read two integers and print their product.

#include<stdio.h>

int main(void) {
    int num1, num2, product;

    // Read two integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate product
    product = num1 - num2;

    // Print result
    printf("Product = %d\n", product);
    
    return 0;
}