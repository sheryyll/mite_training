// Find the index of a given element (Linear Search)
#include <stdio.h>

int main(void) {
    int arr[50], n, i, key;
    int found = -1;

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

    printf("Enter element to search: ");
    scanf("%d", &key);

    // linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }

    if (found != -1)
        printf("Element found at index: %d", found);
    else
        printf("Element not found in the array.");

    return 0;
}
