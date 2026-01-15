// Check if an array is sorted
#include <stdio.h>

int main(void) {
    int arr[50], n, i;
    int isSorted = 1;   // assume sorted

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

    // check sorted
    for (i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = 0;
            break;
        }
    }

    if (isSorted)
        printf("Array is sorted in ascending order.");
    else
        printf("Array is NOT sorted.");

    return 0;
}
