// Count even and odd elements in an array
#include <stdio.h>

int main(void) {
    int arr[50], n, i, ecount = 0, ocount = 0;

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

    // count even and odd elements
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            ecount++;
        } else {
            ocount++;
        }
    }

    // print result
    printf("Count of even elements = %d & odd elements = %d", ecount, ocount);

    return 0;
}
