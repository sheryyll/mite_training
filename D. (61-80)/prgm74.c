// Find sum of elements at even indices
#include <stdio.h>

int main(void) {
    int arr[50], n, i, sum = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    if (n <= 0 || n > 50) {
        printf("Invalid array size!\n");
        return 1;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // sum of elements at even indices
    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum += arr[i];
        }
    }

    printf("Sum of elements at even indices: %d", sum);

    return 0;
}
