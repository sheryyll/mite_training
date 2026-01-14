// Print Fibonacci series up to N terms.
#include <stdio.h>

int main(void) {
    int n, i;
    int first = 0, second = 1, next;

    // read input
    printf("Enter number of terms: ");
    scanf("%d", &n);

    if(n <= 0){
        printf("Please enter a positive integer\n");
        return 0;
    }

    printf("Fibonacci series up to %d terms:\n", n);

    for(i = 1; i <= n; i++) {
        if(i == 1) {
            printf("%d ", first);
        } else if(i == 2) {
            printf("%d ", second);
        } else {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
    }

    printf("\n");
    return 0;
}
