// 4.  Find the missing number in an array of size N containing numbers from 1 to N+1 without using hashmaps
#include<stdio.h>

void missingElement(int arr[], int size){

    printf("\nMissing elements: ");
    for(int i = 0; i < size; i++){
        int flag = 0;
        int num = i + 1;
        for(int j = 0; j < size; j++){
            if(num == arr[j]){
                flag = 1;
                break;
            }
        }
        if(!flag){
            printf("%d ", num);
        }
    }
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

    missingElement(arr, size);
    
    return 0;
}

