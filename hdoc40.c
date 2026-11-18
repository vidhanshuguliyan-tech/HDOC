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

    // Diagonal traversal
    for(int d = 0; d < rows + cols - 1; d++) {

        int startRow = (d < cols) ? 0 : d - cols + 1;
        int startCol = (d < cols) ? d : cols - 1;

        while(startRow < rows && startCol >= 0) {
            printf("%d ", arr[startRow][startCol]);

            startRow++;
            startCol--;
        }
    }

    return 0;
}
//2

#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // Read dimensions of first matrix
    scanf("%d %d", &r1, &c1);

    int A[r1][c1];

    // Read first matrix
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read dimensions of second matrix
    scanf("%d %d", &r2, &c2);

    int B[r2][c2];

    // Read second matrix
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Check multiplication condition
    if(c1 != r2) {
        printf("Multiplication not possible");
        return 0;
    }

    int result[r1][c2];

    // Initialize result matrix
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Multiply matrices
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            for(int k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result matrix
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
