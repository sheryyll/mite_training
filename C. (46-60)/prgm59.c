// Print pattern using increasing alphabets.
#include <stdio.h>

int main() {
    int i, j, n = 5;
    
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
