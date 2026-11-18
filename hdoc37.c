//1

#include <stdio.h>

int main() {
    int rows, cols;

    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];
    int sum[rows];

    // Read matrix elements
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate sum of each row
    for(int i = 0; i < rows; i++) {
        sum[i] = 0;

        for(int j = 0; j < cols; j++) {
            sum[i] = sum[i] + arr[i][j];
        }
    }

    // Print row sums
    for(int i = 0; i < rows; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}
//2

#include <stdio.h>

int main() {
    int rows, cols;

    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];
    int transpose[cols][rows];

    // Read matrix elements
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Find transpose
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            transpose[j][i] = arr[i][j];
        }
    }

    // Print transpose
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
