//1

#include <stdio.h>

int main() {
    int rows, cols, distinct = 1;

    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    // Read matrix elements
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Check whether matrix is square
    if(rows != cols) {
        distinct = 0;
    }
    else {
        // Compare diagonal elements
        for(int i = 0; i < rows; i++) {
            for(int j = i + 1; j < rows; j++) {
                if(arr[i][i] == arr[j][j]) {
                    distinct = 0;
                    break;
                }
            }

            if(distinct == 0) {
                break;
            }
        }
    }

    if(distinct == 1) {
        printf("True");
    }
    else {
        printf("False");
    }

    return 0;
}
//2

#include <stdio.h>

int main() {
    int n, sum = 0;

    scanf("%d %d", &n, &n);

    int arr[n][n];

    // Read matrix elements
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate main diagonal sum
    for(int i = 0; i < n; i++) {
        sum = sum + arr[i][i];
    }

    printf("%d", sum);

    return 0;
}
