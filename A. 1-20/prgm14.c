// Check if a number is a multiple of another number.
#include <stdio.h>

int main(void) {
    int num, base;

    // read input
    printf("Enter the base number: ");
    scanf("%d", &base);

    if(base == 0) {
        printf("Base cannot be zero\n");
        return 1;
    }

    printf("Enter number to check: ");
    scanf("%d", &num);

    // check multiple
    if(num % base == 0){
        printf("%d is a multiple of %d\n", num, base);
    } else {
        printf("%d is not a multiple of %d\n", num, base);
    }
    
    return 0;
}
