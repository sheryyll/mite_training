// Count frequency of a given element
#include <stdio.h>

int main(void) {
    int arr[50], n, i, key, count = 0;

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

    printf("Enter element to count frequency: ");
    scanf("%d", &key);

    // count frequency
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }

    // print result
    printf("Frequency of %d = %d", key, count);

    return 0;
}
