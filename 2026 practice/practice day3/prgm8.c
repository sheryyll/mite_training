// 8.  Print frequency of each element in an array
#include<stdio.h>

void countFrequency(int arr[], int size){
    printf("\nFrequency: \n");

    for(int i = 0; i < size; i++){
        int frequency = 1;
        int isDuplicate = 0;

        for(int k = 0; k < i; k ++){
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

        printf("%d : %d\n", arr[i], frequency);
    }
}

int main(void) {
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size] ;
    printf("Enter array elements: \n");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array elements: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    countFrequency(arr, size);

    return 0;
}