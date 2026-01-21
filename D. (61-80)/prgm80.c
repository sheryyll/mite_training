// Find common elements between two arrays (simple method)
#include <stdio.h>

int main(void) {
    int arr1[50], arr2[50];
    int n1, n2, i, j;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    if (n1 <= 0 || n2 <= 0 || n1 > 50 || n2 > 50) {
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

    printf("Common elements: ");

    // find common elements
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;   // avoid printing same element multiple times
            }
        }
    }

    return 0;
}
