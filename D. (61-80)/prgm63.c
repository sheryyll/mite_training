// Find maximum element in an array
#include <stdio.h>

int main(void) {
    int arr[50], n, i, max;

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

    // assume first element is max
    max = arr[0];

    // find max element
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // print result
    printf("Maximum element in array: %d", max);

    return 0;
}
