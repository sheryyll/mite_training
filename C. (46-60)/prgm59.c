// Print pattern using increasing alphabets.
#include <stdio.h>

int main(void) {
    int i, j, n;
    
    // read input
    printf("Enter size: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}
