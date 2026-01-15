// Rotate array right by one position
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

    // store last element
    temp = arr[n - 1];

    // shift elements right
    for (i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // place last element at first position
    arr[0] = temp;

    // print rotated array
    printf("Array after right rotation by one:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
