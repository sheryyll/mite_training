// Print a binary triangle (0/1 pattern)
// Print a binary triangle (0/1 pattern)
#include <stdio.h>

int main(void) {
    int i, j, k, n;

    printf("Enter size: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        int m = i % 2;   // reset binary value per row

        // print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // print binary values
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("%d", m);
            m ^= 1;
        }

        printf("\n");
    }

    return 0;
}
