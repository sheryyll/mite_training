// Print Floyd’s triangle.
#include <stdio.h>

int main(void) {
    int i, j, n, num = 1;

    // read input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }

    return 0;
}