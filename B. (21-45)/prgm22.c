// Print all numbers from 1 to N that are divisible by both 2 and 3.
#include <stdio.h>

int main(void) {
    int N, i;

    // read input
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // print numbers divisible by 2 and 3
    printf("Numbers divisible by 2 and 3 from 1 to %d:\n", N);
    for(i = 1; i <= N; i++) {
        if(i % 2 == 0 && i % 3 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
