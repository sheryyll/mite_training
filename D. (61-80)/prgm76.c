// Rotate array left by one position
#include <stdio.h>

int main(void) {
    int arr[50], n, i, temp;

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

    // store first element
    temp = arr[0];

    // shift elements left
    for (i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // place first element at end
    arr[n - 1] = temp;

    // print rotated array
    printf("Array after left rotation by one:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
