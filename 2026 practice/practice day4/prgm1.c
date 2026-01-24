#include <stdio.h>

int main() {
    int r, c;
    int matrix[10][10];
    int arr[100];
    int k = 0, temp;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            arr[k++] = matrix[i][j];   
        }
    }

    for (int i = 0; i < k - 1; i++) {
        for (int j = 0; j < k - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    k = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            matrix[i][j] = arr[k++];
        }
    }

    printf("Sorted Matrix (Ascending):\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}