// Print multiplication table of a given number.
#include<stdio.h>

int main(void) {
    int num, i;

    // read input
    printf("Enter number: ");
    scanf("%d", &num);

    // logic for multiplication table
    printf("Multiplication Table for %d:\n", num);
    for( i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}