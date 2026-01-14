// Find the largest digit in a number.
#include<stdio.h>

int main(void) {
    int num, temp, digit, largest = 0;

    // read input
    printf("Enter number: ");
    scanf("%d", &num);

    temp = num;

    if(temp == 0){
        largest = 0;
    } else {
        if(temp < 0){
            temp = -temp;
        }

        while(temp != 0){
            digit = temp % 10; // extract last digit
            if(digit > largest){
                largest = digit;
            }

            temp = temp / 10;
        }
    }

    // print result
    printf("Largest digit in %d = %d", num, largest);

    return 0;
}