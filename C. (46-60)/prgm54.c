// Print inverted pyramid pattern.
#include<stdio.h>

int main(void) {
    int n, i, j, k;

    // read input
    printf("Enter size: ");
    scanf("%d", &n);

    for( i = n; i >= 1; i--){
        // print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // print stars
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}