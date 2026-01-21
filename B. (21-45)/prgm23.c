// Count digits in a number.
#include <stdio.h>

int main(void) {
    int num, temp, count = 0;

    // read input
    printf("Enter number: ");
    scanf("%d", &num);

    temp = num; // store original number

    if (temp == 0) {
        count = 1;
    } else {
        if (temp < 0)
            temp = -temp;

        while (temp > 0) {
            count++;
            temp = temp / 10;
        }
    }

    printf("Digits in %d = %d\n", num, count);

    return 0;
}
