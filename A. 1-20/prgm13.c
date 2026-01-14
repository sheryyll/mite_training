// Check if two numbers have the same last digit
#include<stdio.h>

int main(void) {
    int num1, num2;

    // read input
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // check if numbers end with same digit
    if((num1 % 10) == (num2 % 10)){
        printf("%d and %d end with same digit\n", num1, num2);
    } else {
        printf("%d and %d do not end with same digit\n", num1, num2);
    }

    return 0;
}