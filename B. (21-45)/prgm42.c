// Find GCD of two numbers.
#include<stdio.h>

int main(void) {
    int num1, num2, rem;

    // read input
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    //logic
    if(num1 <= 0)
        num1 = -num1;
    if(num2 <= 0)
        num2 = -num2;

    printf("GCD of %d and %d = ", num1, num2);    
    while(num2 != 0){
        rem = num1 % num2;
        num1 = num2;
        num2 = rem;
    }
    printf("%d", num1);

    return 0;
}