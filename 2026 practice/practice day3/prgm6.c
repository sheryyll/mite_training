// 6.  Write a function to check if the array is sorted
#include<stdio.h>

void isSorted(int arr[], int size){
    int is_sorted = 1;

    for(int i = 0; i < size; i++){
        if(arr[i] > arr[i+1]){
            is_sorted = 0;
            break;
        }
    }
    if(!is_sorted){
        printf("\nArray is not sorted\n");
    } else {
        printf("\nArray is sorted\n");
    }
}

int main(void) {
    int size;

    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array elements:\n");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nArray elements:\n");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    isSorted(arr, size);

    return 0;
}