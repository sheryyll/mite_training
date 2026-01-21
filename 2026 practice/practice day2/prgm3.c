// 3.  Find the second largest number of a given unsorted array with only one pass
#include<stdio.h>
void secondLargest(int arr[], int size){
    int largest = arr[0]; 
    int second_largest = arr[0];

    for(int i = 0; i < size; i++){
        if(arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest){
            second_largest = arr[i];
        }
    }
    printf("\nSecond largest: %d\n", second_largest);
}

int main(void){
    int size;
    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter array elements:\n");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    secondLargest(arr, size);

    return 0;
}