// Find sum of array elements.
#include <stdio.h>

int main(void) {
    int arr[50], n, i, sum = 0;

    // read input
    printf("Enter size: ");
    scanf("%d", &n);

    if (n > 50) {
        printf("Array size exceeds limit!\n");
        return 1;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // calculate sum
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    // print result
    printf("Sum of Array elements: %d", sum);

    return 0;
}
