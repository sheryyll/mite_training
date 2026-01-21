// 7.  Find the largest repeating element of an array

#include<stdio.h>
void largestRepeating(int arr[], int size){
    int largest = 0;
    int largestElement = 0;
    for(int i = 0; i < size; i++){
        int frequency = 1;
        int isDuplicate = 0;

        for(int k = 0; k < i; k++){
            if(arr[i] == arr[k]){
                isDuplicate = 1;
                break;
            }
        }
        if(isDuplicate)
            continue;
        
        for(int j = i + 1; j < size; j++){
            if(arr[i] == arr[j]){
                frequency++;
            }
        }
        
        if(largest < frequency){
            largest = frequency;
            largestElement = arr[i];
        }
    }

    printf("Largest repeating element in the array is %d with frequency %d\n", largestElement, largest);
}

int main(void) {
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array elements: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    largestRepeating(arr, size);

    return 0;
}