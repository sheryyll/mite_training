//  Reverse an array in-place with O(1) space complexity
#include<stdio.h>

void reverseArray(int size, int arr[]){
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

}

int main(void) {
    int size;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the array elements:\n");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    reverseArray(size, arr);

    printf("Reversed array: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}