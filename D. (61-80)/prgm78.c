// Copy elements of one array into another
#include <stdio.h>

int main(void) {
    int arr1[50], arr2[50], n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    if (n <= 0 || n > 50) {
        printf("Invalid array size!\n");
        return 1;
    }

    printf("Enter elements of first array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // copy elements
    for (i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    // print copied array
    printf("Elements of second array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
