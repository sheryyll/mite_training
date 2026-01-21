//  Read a float and print it with 2 decimal places

#include<stdio.h>

int main(void) {
    float number;

    // read number
    printf("Enter the floating point number: ");
    scanf("%f", &number);

    // print with 2 decimal places
    printf("Number with 2 decimal places = %.2f\n", number);

    return 0;
}