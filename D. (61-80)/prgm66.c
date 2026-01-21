// Count positive, negative, and zero elements.
#include <stdio.h>

int main(void) {
    int arr[50], n, i, pcount = 0, ncount = 0, zcount = 0;

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

    // count postive, negative, zero elements
    for (i = 0; i < n; i++) {
        if (arr[i] == 0) {
            zcount++;
        } else if(arr[i] < 0){
            ncount++;
        } else {
            pcount++;
        }
    }

    // print result
    printf("Count of positive elements = %d , negative elements = %d, zero elements = %d", pcount, ncount, zcount);

    return 0;
}
