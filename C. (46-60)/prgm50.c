// Print repeated number triangle (1, 22, 333…)
#include <stdio.h>

int main(void) {
    int i, j, n;

    // read input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}