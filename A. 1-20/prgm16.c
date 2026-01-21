// Check if a number is divisible by 4 but not by 8.
#include <stdio.h>

int main(void) {
    int num;

    // read input
    printf("Enter number: ");
    scanf("%d", &num);

    // check if number is divisible by 4 but not by 8
    if(num % 4 == 0 && num % 8 != 0){
        printf("%d is divisible by 4 but not by 8\n", num);
    } else {
        printf("%d does not satisfy the condition of being divisible by 4 but not by 8\n", num);
    }

    return 0;
}
