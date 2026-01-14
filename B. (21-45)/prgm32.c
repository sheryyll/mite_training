// Find the smallest digit in a number.
#include<stdio.h>

int main(void) {
    int num, temp, digit, smallest = 0;

    // read input
    printf("Enter number: ");
    scanf("%d", &num);

    temp = num;

    if(temp == 0){
        smallest = 0;
    } else {
        if(temp < 0){
            temp = -temp;
        }

        while(temp != 0){
            digit = temp % 10;
            if(digit < smallest){
                smallest = digit;
            }
            temp /= 10;
        }
    }

    printf("Smallest digit in %d = %d\n", num, smallest);

    return 0;
}