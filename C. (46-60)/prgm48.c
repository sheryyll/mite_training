// Print an inverted right triangle star pattern.
#include <stdio.h>

int main(void) {
    int i, j, n;

    // read input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

