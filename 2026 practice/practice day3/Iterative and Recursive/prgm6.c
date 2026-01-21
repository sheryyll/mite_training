// matrix transpose

#include<stdio.h>

void matrixTranspose(int m, int n, int arr[m][n]){
    printf("\n\nTranspose Matrix: \n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}
int main(void){
    int m, n;

    printf("Enter matrix row size: ");
    scanf("%d", &m);

    printf("Enter matrix column size: ");
    scanf("%d", &n);

    int arr[m][n];

    printf("Enter matrix elements: \n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nOriginal matrix: \n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    matrixTranspose(m, n, arr);

    return 0;
}