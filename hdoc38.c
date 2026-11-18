//1

#include <stdio.h>

int main() {
    int rows, cols;

    // Read dimensions of first matrix
    scanf("%d %d", &rows, &cols);

    int A[rows][cols];
    int B[rows][cols];
    int sum[rows][cols];

    // Read first matrix
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read second matrix
    int r, c;
    scanf("%d %d", &r, &c);

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Add both matrices
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Print result
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
//2

#include <stdio.h>

int main() {
    int rows, cols, symmetric = 1;

    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    // Read matrix elements
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // A symmetric matrix must be square
    if(rows != cols) {
        symmetric = 0;
    }
    else {
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                if(arr[i][j] != arr[j][i]) {
                    symmetric = 0;
                    break;
                }
            }

            if(symmetric == 0) {
                break;
            }
        }
    }

    if(symmetric == 1) {
        printf("True");
    }
    else {
        printf("False");
    }

    return 0;
}
