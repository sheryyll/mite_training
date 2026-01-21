// Find the sum of even digits in a number.
#include<stdio.h>

int main(void) {
    int num, digit, temp, esum = 0;

    // read input
    printf("Enter number: ");
    scanf("%d", &num);

    // logic
    temp = num;

    if(temp < 0){
        temp = -temp;
    }
    do{
        digit = temp % 10;
        if(digit % 2 == 0){
            esum += digit;
        }
        temp /= 10;
    }while(temp != 0);

    printf("Sum of even digits of %d = %d\n", num, esum);

    return 0;
}