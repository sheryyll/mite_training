// Merge two arrays into a third array
#include <stdio.h>

int main(void) {
    int arr1[50], arr2[50], arr3[100];
    int n1, n2, i;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    if (n1 < 0 || n2 < 0 || n1 + n2 > 100) {
        printf("Invalid array size!\n");
        return 1;
    }

    printf("Enter elements of first array: ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of second array: ");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // copy first array
    for (i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }

    // copy second array
    for (i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i];
    }

    // print merged array
    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}
