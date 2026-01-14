// Count how many digits are even in a number.
#include<stdio.h>

int main(void) {
    int num, temp, digit, ecount = 0;

    // read input
    printf("Enter number: ");
    scanf("%d", &num);

    temp = num;

    if(temp < 0){
        temp = -temp;
    }

    do {
        digit = temp % 10;
        if (digit % 2 == 0) {
            ecount++;
        }
        temp /= 10;
    } while (temp != 0);


    printf("Count of even digits in %d = %d\n", num, ecount);

    return 0;
}