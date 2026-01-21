// Read an array and print all elements
#include <stdio.h>

int main(void) {
    int arr[50], n, i;

    // read input
    printf("Enter size: ");
    scanf("%d", &n);

    if (n > 50) {
        printf("Array size exceeds limit!\n");
        return 1;
    }

    // print result
    printf("Array elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
