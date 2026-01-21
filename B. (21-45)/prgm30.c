// Find the nth Fibonacci number.
#include <stdio.h>

int main(void) {
    int n, i;
    int first = 0, second = 1, next = 0;

    // read input
    printf("Enter nth term: ");
    scanf("%d", &n);

    if(n <= 0){
        printf("Please enter a positive integer\n");
        return 0;
    }

    if(n == 1) {
        next = first;
    } else if(n == 2) {
        next = second;
    } else {
        for(i = 3; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }
    }

    printf("The %dth Fibonacci number is %d\n", n, next);

    return 0;
}
