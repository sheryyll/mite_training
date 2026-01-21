// Count how many digits are odd in a number
#include<stdio.h>

int main(void) {
    int num, digit, temp, ocount = 0;

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
        if(digit % 2 != 0){
            ocount++;
        }
        temp /= 10;
    }while(temp != 0);

    printf("Count of odd digits in %d = %d\n", num, ocount);

    return 0;
}