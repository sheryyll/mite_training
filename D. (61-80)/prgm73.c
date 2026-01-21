// Replace all negative numbers with zero
#include <stdio.h>

int main(void) {
    int arr[50], n, i;

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

    // replace negatives with zero
    for (i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }

    // print modified array
    printf("Array after replacing negatives with zero:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
