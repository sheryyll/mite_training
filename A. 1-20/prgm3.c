// Find the larger of two numbers without using comparison operators.
#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num1, num2, larger;
    
    // read input
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // logic to find largest number
    larger = (num1 + num2 + abs(num1 - num2 )) / 2;

    // print result
    printf("The larger number is: %d\n", larger);

    return 0;
}