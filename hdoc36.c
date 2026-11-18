//1

#include <stdio.h>

int main() {
    int rows, cols;

    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    // Read matrix elements
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Print matrix elements
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
//2

#include <stdio.h>

int main() {
    int rows, cols, sum = 0;

    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    // Read matrix elements
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate sum
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum = sum + arr[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}
