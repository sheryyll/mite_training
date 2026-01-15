// Print a pattern of alternate 1s and 0s
#include <stdio.h>

int main(void) {
    int i, j, n;
    
    // read input
    printf("Enter size: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%d", (i + j) % 2);
        }
        printf("\n");
    }
    return 0;
}
