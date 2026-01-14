// Read three numbers and print their average.

#include <stdio.h>

int main(void){
    int num1, num2, num3;
    float average;

    // read 3 numbers
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    // calculate average
    average = (num1 + num2 + num3) / 3.0;

    // print result
    printf("Average of 3 numbers (%d, %d, %d) = %.4f\n", num1, num2, num3, average);

    return 0;
}