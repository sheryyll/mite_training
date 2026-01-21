// 9.  Find the first repeating element of an array
#include<stdio.h>

void firstRepeating(int arr[], int size){
    printf("\nFirst reapeating element: ");
    for(int i = 0; i < size; i++){
        int isDuplicate = 0;

        for(int k = 0; k < i; k++){
            if(arr[i] == arr[k]){
                isDuplicate = 1;
                break;
            }
        }

        if(isDuplicate){
            printf("%d", arr[i]);
            break;
        }
    }
}

int main(void){
    int size;
    
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array elements: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Original array elements: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    firstRepeating(arr, size);

    return 0;
}