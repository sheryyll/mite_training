// Read two integers and print quotient and remainder.

#include<stdio.h>

int main(void) {
    int quotient, remainder;
    int divisor, dividend;

    // read divisor and dividend
    printf("Enter the dividend: ");
    scanf("%d", &dividend);

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    //check if divisor is 0
    if(divisor == 0){
        printf("Division by zero isnt allowed\n");
        return 1;
    }
    
    // calculate quotient and remainder
    quotient = dividend / divisor;
    remainder = dividend % divisor;

    // print results
    printf("Quotient = %d\n", quotient);
    pritnf("Remainder = %d\n", remainder);
    
    return 0;
}