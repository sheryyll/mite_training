// Find minimum element in an array
#include <stdio.h>

int main(void) {
    int arr[50], n, i, min;

    // read input
    printf("Enter size: ");
    scanf("%d", &n);

    if (n > 50 || n <= 0) {
        printf("Invalid array size!\n");
        return 1;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // assume first element is min
    min = arr[0];

    // find min element
    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // print result
    printf("Minimum element in array: %d", min);

    return 0;
}
