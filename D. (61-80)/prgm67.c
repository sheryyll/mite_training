// Find second largest element in an array.
#include <stdio.h>

int main(void) {
    int arr[50], n, i, j, temp;

    printf("Enter size: ");
    scanf("%d", &n);

    if (n < 2 || n > 50) {
        printf("Invalid array size!\n");
        return 1;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble sort (ascending order)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // second largest element
    printf("Second largest element: %d", arr[n - 2]);

    return 0;
}
