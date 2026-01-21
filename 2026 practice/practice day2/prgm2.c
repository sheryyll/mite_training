// 2.  Find the duplicate elements in an array
#include<stdio.h>

void duplicateElements(int arr[], int size){
    int visited[size];

    for(int i =0; i <size; i++){
        visited[i] = 0;
    }

    printf("\nDuplicate elements: ");

    for(int i = 0; i < size; i++){
        if(visited[i] == 1){
            continue;
        }
        int is_duplicate = 0;
        for( int j = i +1; j <size; j++){
    
            if(arr[i] == arr[j]){
                is_duplicate = 1;
                visited[j] = 1;
            }
        }
        if(is_duplicate){
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main(void) {
    int size;

    printf("Enter the size of array: ");
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

    duplicateElements(arr, size);

    return 0;
}
