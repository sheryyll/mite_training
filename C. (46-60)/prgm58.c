// Print a number pyramid (palindrome).
#include <stdio.h>

int main(void) {
    int i, j, n;
    
    // read input
    printf("Enter size: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        for (j = 1; j <= n - i; j++)
            printf(" ");

        for (j = 1; j <= i; j++)
            printf("%d", j);

        for (j = i - 1; j >= 1; j--)
            printf("%d", j);

        printf("\n");
    }
    return 0;
}
